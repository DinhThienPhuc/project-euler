const input = require('./input');
var isPrime = require('../utilities/isPrime');
const NUM = input.NUM;

for (let i = 2; i <= NUM / 2; i++) {
    if (NUM % i === 0 && isPrime(NUM / i)) {
        console.log(`Max Prime: ${NUM / i}`);
    }
}