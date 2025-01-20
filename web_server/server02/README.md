# HTTP TCP Server

This project demonstrates a simple HTTP server implemented in C++ using Linux-specific socket programming. The server listens on a specified IP address and port, accepts incoming connections, and responds with a basic HTML message.

## How to Build

To build the code, use the following command:

```sh
g++ -Iinclude -o server.out src/http_tcpServer.cpp src/server.cpp
```

## How to Run
1. After building the code using the command above, run the compiled executable:

```sh
./server.out
```

2. Open a web browser and navigate to URL below to see the response:
```
http://<your_server_ip>:8080
```

Ex:
```sh
localhost:8080/
```

## Expexted output

```sh
*** Listening on ADDRESS: 0.0.0.0 PORT: 8080 ***


====== Waiting for a new connection ======



------ Received Request from client ------


------ Server Response sent to client ------


====== Waiting for a new connection ======
```

## Reference
This example is based on the article: [Building an HTTP Server From Scratch in C++](https://osasazamegbe.medium.com/showing-building-an-http-server-from-scratch-in-c-2da7c0db6cb7).

[GitHub Repository:](https://github.com/OsasAzamegbe/http-server/tree/main)