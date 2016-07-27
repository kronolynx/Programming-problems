var fs = require('fs');

var total = fs.readFileSync(process.argv[2]).toString().split('\n');

console.log(total.length - 1);
