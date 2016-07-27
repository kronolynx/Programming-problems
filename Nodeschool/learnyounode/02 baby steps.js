var total = process.argv.slice(2)
		   .map(x => Number(x))
                   .reduce( (x, y) => x + y);

console.log(total);
