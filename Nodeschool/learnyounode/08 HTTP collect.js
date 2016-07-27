var http = require('http');

http.get(process.argv[2], response => {
    var output = "";
    response.on('data', data =>  output += data);
    response.on('error', console.error);
    response.on('end', () => {
        output = output.toString();
        console.log(output.length);
        console.log(output);
    });
}).on('error', console.error);
