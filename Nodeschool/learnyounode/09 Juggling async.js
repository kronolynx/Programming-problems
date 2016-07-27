var http = require('http');

var countCallbacks = 0;
var collect = [];

var displayData = () => {
    collect.forEach(item => console.log(item));
}

var getStream = (url, order) => {
    http.get(url, (response) => {
        collect[order] = "";
        response.setEncoding('utf8');
        response.on('data', data => collect[order] += data);
        response.on('end', () => {
            countCallbacks++;
            if(process.argv.length - 2 === countCallbacks){
                displayData();
            }
        })
    })
}

process.argv.slice(2).forEach((x, y) => getStream(x, y));
