const input = require('./input');
const PRIME_ST = input.PRIME_ST;
var isPrime = require('../utilities/isPrime');

var count = 0;
var i = 2;
while (i > 0) {
    if(isPrime(i)) {
        count++;
        if(count === PRIME_ST) {
            return console.log(`10001st prime number: ${i} and counter: ${count}`);
        }
    }
    i++;
}