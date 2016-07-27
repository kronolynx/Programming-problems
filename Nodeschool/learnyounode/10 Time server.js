var net = require("net");
var strftime = require("strftime");

var server = net.createServer(socket => {
    socket.end(strftime('%F %R\n', new Date()));
});

server.listen(process.argv[2]);
