//NodeJS v6.9.1
const readlineSync = require('readline-sync');
const linearRegression = require('./linearRegression.class.js');
var x = [],
    y = [];
while(input = readlineSync.question('x> ')) {
  x.push(Number(input));
}
for(var i=0; i<x.length; i++) {
  while(!(input  = readlineSync.question("x: "+x[i]+"| y> "))) {}
  y.push(Number(input));
}

var regression = new linearRegression(x, y);
var f = regression.calc();
console.log(f);
