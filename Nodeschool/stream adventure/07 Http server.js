var http = require('http');
var through = require('through2');

var server = http.createServer((req, res) => {
    if(req.method !== "POST"){
        res.writeHead(404);
        res.end('Waiting for post');
    }

    res.writeHead(200, {'content-type': 'text/plain'});
    req.pipe(through(function(buf, _ , next) {
        this.push(buf.toString().toUpperCase());
        next();
    })).pipe(res);

});

server.listen(process.argv[2]);
