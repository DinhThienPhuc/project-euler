var isPalindromic = require('./utilities/isPalindromic');

var i = 999;
while (i > 900) {
    for (var j = 999; j > 900; j--) {
        if (isPalindromic(i * j)) {
            return console.log(`Palindromic: ${i * j}`);
        }
    }
    i--;
}  