#include "server.cpp"
#include <string>
#include "request.cpp"
#include "response.cpp"
#include <thread>

void logServingFile(const std::string& path, const std::string& mimetype) {
  std::cout << "Serving file: " << path << "with mimetype: "<< mimetype << std::endl;
}

void handleClient(int client_socket_fd) {
  char client_req_buffer[1024] = {0};

  //Handle the client request
  read(client_socket_fd, client_req_buffer, 1024);

  HttpRequest req = HttpRequest();

  req.parseRequest(client_req_buffer);

  std::string mimetype = req.getMimeType(req.path);

  // For debugging
  // std::cout << "Mimetype: " << mimetype << std::endl;

  HttpResponse res = HttpResponse();
  std::string body = req.readHtmlFile(req.path);
  std::string response = res.frameHttpResponse("200","OK",req.headers,body,mimetype);
  logServingFile(req.path, mimetype);

  // Write the response to the client
  write(client_socket_fd, response.c_str(), response.length());

  // Close the client socket
  close(client_socket_fd);
}

int main (int argc, char* argv[]) {
  Server server = Server(argv[1]);
  struct sockaddr_in client_addr;
  socklen_t client_addr_size;
  int s_fd;
  
  s_fd = server.start();
  client_addr_size = sizeof(struct sockaddr_in);

  while (true)
  {
    int client_socket_fd = accept(s_fd, (struct sockaddr *)&client_addr, &client_addr_size);
    if (client_socket_fd < 0) {
      std::cerr << "Failed to accept client request." << std::endl;
      exit(1);
    }

    // Create a new thread to handle the client request
    std::thread clientThread(handleClient, client_socket_fd);
    clientThread.detach(); //  Detach the thread to allow it to run independently
  }
  
  return 0;
}


