const {
    getProperDivisorsOf,
    getSumOfListNumbers,
} = require("../../helpers/functions")

module.exports = (limit) => {
    if (!Number.isInteger(limit)) return 0

    const amicableNumbersUnderLimit = []

    for (let n = 2; n <= limit; n++) {
        if (amicableNumbersUnderLimit.includes(n)) {
            continue
        }

        const properDivisors = getProperDivisorsOf(n)
        const otherNumber = getSumOfListNumbers(properDivisors)

        if (otherNumber === n) {
            continue
        }

        const properDivisorsOfOther = getProperDivisorsOf(otherNumber)
        const originNumber = getSumOfListNumbers(properDivisorsOfOther)

        if (originNumber !== n) {
            continue
        }

        amicableNumbersUnderLimit.push(n)
        amicableNumbersUnderLimit.push(otherNumber)
    }

    let sum = getSumOfListNumbers(amicableNumbersUnderLimit)

    return sum
}
