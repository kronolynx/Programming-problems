var http = require('http');
var map = require('through2-map');

var server = http.createServer((req, res) => {
    if(req.method !== 'POST')
        return res.end('Only POST being accepted\n');

    req.pipe(map(function (chunk) {
        return chunk.toString().toUpperCase();
    })).pipe(res);
});

server.listen(process.argv[2]);
