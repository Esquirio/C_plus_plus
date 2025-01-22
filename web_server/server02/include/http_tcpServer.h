#ifndef INCLUDE_HTTP_TCPSERVER_LINUX_H_
#define INCLUDE_HTTP_TCPSERVER_LINUX_H_

#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>

#include <string>

namespace http {
class TcpServer {
 public:
  TcpServer(std::string ip, int port);
  ~TcpServer();
  void startListen();

 private:
  std::string m_ip;
  int m_port;
  int m_socket;
  int m_new_socket;
  long m_incoming_msg;
  struct sockaddr_in m_socket_address;
  unsigned int m_socket_address_len;
  std::string m_server_response;

  int startServer();
  void closeServer();
  void acceptConnection(int &new_socket);
  std::string buildResponse();
  void sendResponse();
};
}  // namespace http

#endif  // INCLUDE_HTTP_TCPSERVER_LINUX_H_