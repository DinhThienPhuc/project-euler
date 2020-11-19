module.exports = (number) => {
    if (!Number.isInteger(number)) return 0

    let sum = 0
    let num = 2
    let originNumberDigits = [1]

    while (num <= number) {
        let previousExtra = 0
        let numberDigits = []

        originNumberDigits.map((digit) => {
            const digitCalculation = digit * num + previousExtra
            const remainder = digitCalculation % 10
            previousExtra = Math.floor(digitCalculation / 10)
            numberDigits.push(remainder)
        })

        while (previousExtra > 0) {
            numberDigits.push(previousExtra % 10)
            previousExtra = Math.floor(previousExtra / 10)
        }

        num += 1
        originNumberDigits = numberDigits
    }

    originNumberDigits.map((digit) => {
        sum += digit
    })

    return sum
}
