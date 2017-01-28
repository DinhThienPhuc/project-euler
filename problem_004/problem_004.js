const input = require('./input');
var isPalindromic = require('../utilities/isPalindromic');

var ceilBound = input.ceilBound;
var floorBound = input.floorBound;
var i = ceilBound;
while (i > floorBound) {
    for (var j = ceilBound; j > floorBound; j--) {
        if (isPalindromic(i * j)) {
            return console.log(`Palindromic: ${i * j}`);
        }
    }
    i--;
}  