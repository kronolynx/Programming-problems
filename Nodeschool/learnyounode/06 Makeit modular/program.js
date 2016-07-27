var filterModule = require('./Filtered LS');

filterModule(process.argv[2], process.argv[3], (err, list) => {
    if(!err)
        list.forEach(x => console.log(x));
});
