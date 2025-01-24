#ifndef REQUEST_H
#define REQUEST_H

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>

class HttpRequest {
 public:
  std::string method;
  std:: string path;
  std::map<std::string, std::string> headers;
  void parseRequest(const std::string& rawRequest);
  
  std::string readHtmlFile(const std::string &path);
  std::string getMimeType(const std::string &path);
};

#endif  // REQUEST_H