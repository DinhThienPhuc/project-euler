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

## Guide for solve problem

- Run `create-problem.sh` file to create problem correspond with Project Euler problem.

```bash
./create-problem.sh 0001.multiples-of-3-and-5 MULTIPLES_OF_3_AND_5
```

Folder format: `<problem-number>.<problem-name>`
Example: `0001.multiples-of-3-and-5`

- Write problem requirements, input params in `input.h`
- Write code in `solution.cpp`
- Compile and run solution using `compile.sh` file

```bash
./compile.sh 0001.multiples-of-3-and-5 solution
```

- Submit result to Project Euler website for checking
- Copy and paste the overview.pdf file for best answer
- Rewrite the answer by yourself to `answer.cpp` file
- Compile and run answer using `compile.sh` file

```bash
./compile.sh 0001.multiples-of-3-and-5 answer
```

- Check the answer and self-study for better knowledge
