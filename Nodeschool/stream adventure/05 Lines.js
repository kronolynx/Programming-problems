var through = require('through2');
var split = require('split');
var counter = 1;

var read = function(line, _, next){
    var line = counter++ % 2 == 0 ?
               line.toString().toUpperCase()
               : line.toString().toLowerCase();
               
    this.push(line + '\n');
    next();
}
var end = function(done){
    done();
}
var stream = through(read, end);

process.stdin
       .pipe(split())
       .pipe(stream)
       .pipe(process.stdout);
