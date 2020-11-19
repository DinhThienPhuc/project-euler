module.exports = (exponent) => {
    if (!Number.isInteger(exponent)) return 0

    let sum = 0
    let originDigits = [1]

    for (let i = 1; i <= exponent; i++) {
        let newDigits = []
        let previousPlus = 0

        originDigits.map((digit) => {
            const digitCalculation = digit * 2 + previousPlus
            const remainder = digitCalculation % 10
            previousPlus = Math.floor(digitCalculation / 10)
            newDigits.push(remainder)
        })

        while (previousPlus > 0) {
            newDigits.push(previousPlus % 10)
            previousPlus = Math.floor(previousPlus / 10)
        }

        originDigits = newDigits
    }

    originDigits.map((digit) => {
        sum += digit
    })

    return sum
}
