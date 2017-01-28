const input = require('./input');
var arr = input.arr;

var multi = 1;
for (let i = 0; i < arr.length; i++) {
    multi *= arr[i];
}
console.log(`Multi: ${multi}`);