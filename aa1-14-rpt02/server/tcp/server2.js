// tcp server (network server)
var net = require("net");
var port = 3000;

// Network connection using socket
var server = net.createServer(socket => {
  console.log("Server2-Connection from " + socket.remoteAddress);
  socket.end("Hello AA14! from localhost:3000");
});

server.listen(port, "127.0.0.1");
console.log("Network server started at port : " + port);
