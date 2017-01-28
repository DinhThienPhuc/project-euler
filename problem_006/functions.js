function sumOfSquares(num) {
    var sum = 0;
    for (let i = 1; i <= num; i++) {
        sum += i * i;
    }
    return sum;
}

function squareOfSum(num) {
    var sum = 0;
    for (let i = 1; i <= num; i++) {
        sum += i;
    }
    return sum * sum;
}

module.exports.squareOfSum = squareOfSum;
module.exports.sumOfSquares = sumOfSquares;