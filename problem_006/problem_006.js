const input = require('./input');
const functions = require('./functions');

var NUM = input.NUM;
var sumOfSquares = functions.sumOfSquares;
var squareOfSum = functions.squareOfSum;

let diff = squareOfSum(NUM) - sumOfSquares(NUM);

console.log(`Difference: ${diff}`);