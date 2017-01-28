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