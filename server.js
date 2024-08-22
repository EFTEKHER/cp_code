const http = require("http");
const fs = require("fs");

const server = http.createServer((req, res) => {
  if (req.url === "/") {
    // Handle the Home Page route
    res.writeHead(200, { "Content-Type": "text/plain" });
    res.write("This is the Home Page");
    res.end();
  } else if (req.url === "/about") {
    // Handle the About Page route
    res.writeHead(200, { "Content-Type": "text/plain" });
    res.write("This is the About Page");
    res.end();
  } else if (req.url === "/contact") {
    // Handle the Contact Page route
    res.writeHead(200, { "Content-Type": "text/plain" });
    res.write("This is the Contact Page");
    res.end();
  } else if (req.url === "/file-write") {
    // Handle the File Write route
    fs.writeFile("demo.txt", "hello world", (err) => {
      if (err) {
        res.writeHead(500, { "Content-Type": "text/plain" });
        res.write("Failed to write file");
        res.end();
      } else {
        res.writeHead(200, { "Content-Type": "text/plain" });
        res.write("File written successfully");
        res.end();
      }
    });
  } else {
    // Handle any other routes
    res.writeHead(404, { "Content-Type": "text/plain" });
    res.write("404 Not Found");
    res.end();
  }
});

// Server listens on port 5500
server.listen(5500, () => {
  console.log("Server is listening on port 5500");
});
