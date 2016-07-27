var path = require("path");
var fs = require("fs");

fs.readdir(process.argv[2],(err, list) => {
    var extension = "." + process.argv[3];
    if(!err)
	list.filter( x => path.extname(x) === extension)
            .forEach( x => console.log(x));
});
