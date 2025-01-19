
# Simple HTTP Server using Boost.Asio

This example demonstrates a simple HTTP server implemented using Boost.Asio in C++. The server listens on port 8080 and responds with a basic "Hello World" message.

## Source

This example is based on the article: [Exploring C++ for Server-Side Web Development](https://medium.com/@mrunalgugemuge9850/exploring-c-for-server-side-web-development-4599454d98a1) by Mrunal Gugemuge.

## Code Overview

The server is implemented in `server_01.cpp` and includes the following key components:

- **Boost.Asio**: A cross-platform C++ library for network and low-level I/O programming.
  - `sudo apt install libboost-dev`
- **TCP Acceptor**: Listens for incoming TCP connections on port 8080.
- **TCP Socket**: Handles communication with the connected client.
- **HTTP Response**: A simple HTTP response with a "Hello World" message.

## How to Run

1. Ensure you have Boost.Asio installed on your system.
2. Compile the `server_01.cpp` file using a C++ compiler with Boost support.
3. Run the compiled executable.
4. Open a web browser and navigate to `http://localhost:8080` to see the response.
