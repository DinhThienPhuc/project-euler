# Project Euler Solutions

-   The solution (or algorimths) for each of problem in [Project Euler](https://projecteuler.net).
-   This repo uses Javascript, C, C++, maybe Python and their libraries.

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

-   This repo shows my solution to solve the problem and recommended Project Euler solution.
-   Any additional approach will be welcome, discussed and improved.

## Guide steps for solve problem

1.  Run `create-problem.sh` file to create problem correspond with Project Euler problem.

```bash
./create-problem.sh 0001 MULTIPLES_OF_3_AND_5
```

Folder format: `<problem-number>`

Example: `0001`

Problem name format: `<CONSTANCE_SNAKE_CASE>`

Example: `MULTIPLES_OF_3_AND_5`

2.  Write problem requirements, input params in `input.h` and `input.js`
3.  Update `index.js` for output the result run by `*.js` files
4.  Write code in `solution.cpp` and `solution.js`
5.  Write unit test in `all.test.js` for testing `*.js` files, using Jest. Also write unit test in `functions.test.js` if add some new function helper
6.  Run the command below for testing functions helper (if add more). If any test does not pass, fix that function

```bash
npm run test-helpers
```

7.  Run the command below for testing solution. If any test does not pass, fix the solution

```bash
PROBLEM=<problem-number> npm run test
// Example: PROBLEM=0001 npm run test
```

8.  If all test passed, compile and run solution using `run.sh` file

```bash
./run.sh problems/<problem-number>
// Example: ./run.sh problems/0001
```

9.  Submit result to Project Euler website for checking
10. Copy and paste the overview.pdf file for best answer
11. Rewrite the answer by yourself to `answer.cpp`, `answer.js` file
12. Run the command below for testing answer. If any test does not pass, fix the answer

```bash
PROBLEM=<problem-number> npm run test
// Example: PROBLEM=0001 npm run test
```

13. Re-compile and run answer using `run.sh` file

```bash
./run.sh problems/<problem-number>
// Example: ./run.sh problems/0001
```

14. Check the answer and self-study for better knowledge
