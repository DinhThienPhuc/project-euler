# Project Euler Solutions

- The solution (or algorimth) for each of problem in [Project Euler](https://projecteuler.net).
- This repo uses Javascript, C, C++, maybe Python and their libraries.

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

- This repo shows my solution to solve the problem and recommended Project Euler solution.
- Any additional approach will be welcome, discussed and improved.
