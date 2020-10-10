// http server : index.js

var http = require();
port = 3000;

var server = http.createServer(function(  ) {
  response.writeHeader(, {
    "Content-Type": "text/plain"
  });
  response.write("Hello HTTP server from node.js"); // WEB response
  response.write("\n");
  response.;

});

server.(port);
console.log("Server Running on " + port + 
	".\nLaunch http://localhost:" + port);
