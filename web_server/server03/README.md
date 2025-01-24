# Simple HTTP Server Example

This is a simple HTTP server example written in C++. It demonstrates how to handle client requests and serve HTML files using multithreading.

## Directory structure
```
web_server/
└── server03/
    ├── include/
    │   ├── request.h
    │   ├── response.h
    │   └── server.h
    ├── src/
    │   ├── main.cpp
    │   ├── request.cpp
    │   ├── response.cpp
    │   └── server.cpp
    ├── html/
    │   └── index.html
    ├── CMakeLists.txt
    └── README.md
```

## How to build and run the server

1. **Compile the server:**

  ```bash
  g++ -Iinclude -o server.out main.cpp
  ```

2. **Run the server:**

  ```bash
  ./server 8080
  ```
3. **Access the server:**
    Open your web browser and navigate to `http://localhost:<port>/index.html` to see the served HTML page.

    Example:
    ```
    http://localhost:8080/index.html
    ```

4. **Expected messages in the console**
  ```bash
  Server listening on port 8080
  Serving file: /index.htmlwith mimetype: text/html
  Serving file: /styles.csswith mimetype: text/css
  Serving file: /image.pngwith mimetype: image/png
  ```


## References
- [I wrote a HTTP server from scratch in C++](https://medium.com/@aryandev512/i-wrote-a-http-server-from-scratch-in-c-0a97e8252371)
- [Webby HTTP Server](https://github.com/Aryandev12/webby-http-server/tree/main)
