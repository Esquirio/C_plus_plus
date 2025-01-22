#include "include/server.h"

class Server {
 private:
  /* data */
 public:
  std::string port;
  Server(std::string port) { this->port = port; };

  int start() {
    // cerate server socket
    int server_socket_fd;            // file descriptor for server socket
    struct sockaddr_in server_addr;  // structure for server address

    // Create server socket
    server_socket_fd - socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket_fd < 0) {
      std::cerr << ¨Failed to create server socket.¨ << std::endl;
      exit(1);
    }

    // Configure server address
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(std::stoi(this->port));
    server_addr.sin_addr.s_addr = htonl(INADDR_ANY);  // listen on any address

    // Bind the socket to an IP address and port
    if (bind(server_socket_fd, (struct sockaddr *)&server_addr,
             sizeof(server_addr)) < 0) {
      std::cerr << "Failed to bind server socket." << std::endl;
      exit(1);
    })

    // Make the server socket a listening socket
    if (listen(server_socket_fd, 10) < 0) {
      std::cerr << "Failed to listen on server socket." << std::endl;
      exit(1);
    }

    std::cout << "Server listening on port " << this->port << std::endl;

    return server_socket_fd;
  };

  void stop() {
    // Close the server socket
    close(server_socket_fd);
    std::cout << "Server stopped." << std::endl;
  }

  ~Server(){};
};

server::server(/* args */) {}

server::~server() {}
