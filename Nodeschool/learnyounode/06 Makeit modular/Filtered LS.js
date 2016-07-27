module.exports = (dir, ext, fn) => {
    var path = require("path");
    var fs = require("fs");

    fs.readdir(dir, (err, list) => {
        if(err)
            return fn(err);
        var extension = "." + ext;
	    fn(null, list.filter( x => path.extname(x) === extension));
    });
};
