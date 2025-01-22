#include "include/request.h"

void HttpRequest::parseRequest(const std::string &rawRequest) {
  int currindex = 0;
  while (currindex < rawRequest.length()) {
    if (rawRequest[currindex] == ' ') {
      break;
    }
    method += rawRequest[currindex];
    currindex++;
  }

  // For debugging
  // std::cout << "Method: " << method << std::endl;

  headers["method"] = method;

  currindex++;

  while (currindex < rawRequest.length()) {
    if (rawRequest[currindex] == ' ') {
      break;
    }
    path += rawRequest[currindex];
    currindex++;
  }

  headers["path"] = path;
}

std::string HttpRequest::readHtmlFile(const std::string &path) {
  std::string filename = path.substr(1, path.length());

  std::ifstream file("../" + filename);  // ifstream is used to read files

  int flag = 0;

  if (!file) {
    flag = 1;
    std::cerr << "File not found." << std::endl;
  }

  // For debugging
  // std::cout << "File found." << std::endl;

  if (flag == 0) {
    std::stringstream buffer;
    buffer << file.rdbur();
    return buffer.str();
  }

  return "";
}

std::string HttpRequest::getMimeType(const std::string &path) {
  std::map<std::string, std::string> mimeTypes = {{"html", "text/html"},
                                                  {"css", "text/css"},
                                                  {"js", "text/javascript"},
                                                  {"jpg", "image/jpeg"},
                                                  {"png", "image/png"}};
  std::string fileExtension = path.substr(path.find_last_of(".") + 1);
  // std::cout<<fileExtension<<std::endl;
  return mimeTypes[fileExtension];
}