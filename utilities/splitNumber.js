var reverse = [];
module.exports = function splitNumber(num) {
    if (num >= 1) {
        reverse.push(num % 10);
        return splitNumber(parseInt(num / 10));
    } else {
        let newReverse = reverse;
        reverse = []; 
        return newReverse;
    }
}