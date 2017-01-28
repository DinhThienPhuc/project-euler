const input = require('./input');
const STR = input.STR;
const range = input.range;

var arrStr = STR.split('');
var max = 0;

var i = 0;
while (i < arrStr.length) {
    var product = 1;
    var elements = [];
    for (let j = i; j < i + range; j++) {
        product *= arrStr[j];
    }
    if(product > max) {
        max = product;
    }
    i++;
}

console.log(`Max Product: ${max}`);