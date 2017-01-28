var sum = 0;
var arr = [];

arr[0] = 1;
arr[1] = 2;

var i = 1;
while (arr[i] < 4000000) {
    arr[i + 1] = arr[i] + arr[i - 1];
    if (i % 3 === 1) {
        sum += arr[i];
    }
    i++;
}

console.log('sum: ', sum);