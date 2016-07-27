var url = require('url');
var http = require('http');

var server = http.createServer((req, res) => {
    var data = url.parse(req.url, true);
    var result;

    if(data.pathname === '/api/parsetime'){
        var date = new Date(data.query.iso);
        result = {
            hour: date.getHours(),
            minute: date.getMinutes(),
            second: date.getSeconds()
        };
    }else if(data.pathname === '/api/unixtime') {
        result = {unixtime: Date.parse(data.query.iso)};
    }
    if(result){
        res.writeHead(200, { 'Content-Type': 'application/json' });
        res.end(JSON.stringify(result));
    } else {
        res.writeHead(404);
        res.end();
    }
});

server.listen(process.argv[2]);
