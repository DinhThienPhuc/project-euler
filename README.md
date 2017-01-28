# Project Euler Solutions

- The solution (or algorimth) for each of problem in [Project Euler](https://projecteuler.net).
- This repo uses Javascript and none of its methods (or functions)

## Example for isPalindromic() function
```Javascript
var splitNumber = require('./splitNumber');

module.exports = function (num) {
    var arr = splitNumber(num);
    var flag = true;
    for (let i = 0; i < arr.length / 2; i++) {
        if (arr[i] !== arr[arr.length - i - 1]) {
            flag = false;
            break;
        }
    }
    return flag;
}
```

- This repo just shows one in many solutions to solve the problem.
- Any additional approach will be welcome and discuss and improve