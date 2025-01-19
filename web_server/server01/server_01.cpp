#include <iostream>
#include <string>
#include <boost/asio.hpp>

using namespace std;
using namespace boost::asio;
using ip::tcp;

string generate_response() {
  return "HTTP/1.1 200 OK\r\n"
          "Content-Type: text/html\r\n"
          "Content-Length: 43\r\n"
          "\r\n"
          "Hello World! First server using Boost.Asio!";
}

int main() {
  io_service io;
  tcp::acceptor acceptor(io, tcp::endpoint(tcp::v4(), 8080));

  while (true) {
    tcp::socket socket(io);
    acceptor.accept(socket);

    try {
      string response = generate_response();
      write(socket, buffer(response));
    } catch (const std::exception &e) {
      cerr << "Exception: " << e.what() << endl;
    }
  }
  return 0;
}