const getNumberLetterOfTwoDigitNumber = (numberDict, number) => {
    if (number <= 19) {
        return numberDict[number]
    }

    if (number <= 99) {
        // 20 ~ 99
        const unit = number % 10
        const tensOf = number - unit
        const numberLetter =
            numberDict[tensOf] + (unit == 0 ? "" : numberDict[unit])

        return numberLetter
    }

    return ""
}

module.exports = (maxNumber) => {
    if (!Number.isInteger(maxNumber)) return 0

    //create a map that stores strings indexed by strings
    const numberDict = {
        1: "one",
        2: "two",
        3: "three",
        4: "four",
        5: "five",
        6: "six",
        7: "seven",
        8: "eight",
        9: "nine",
        10: "ten",
        11: "eleven",
        12: "twelve",
        13: "thirteen",
        14: "fourteen",
        15: "fifteen",
        16: "sixteen",
        17: "seventeen",
        18: "eighteen",
        19: "nineteen",
        20: "twenty",
        30: "thirty",
        40: "forty",
        50: "fifty",
        60: "sixty",
        70: "seventy",
        80: "eighty",
        90: "ninety",
        1000: "onethousand",
    }

    let numberLetterCounts = 0

    for (let n = 1; n <= maxNumber; n++) {
        if (n <= 99) {
            let numberLetter = getNumberLetterOfTwoDigitNumber(numberDict, n)
            numberLetterCounts += numberLetter.length
            continue
        }

        // 100 ~ 999
        if (n <= 999) {
            const hundredUnit = Math.floor(n / 100)
            const tensOf = n - hundredUnit * 100
            let numberLetter = numberDict[hundredUnit] + "hundred"

            const temp = getNumberLetterOfTwoDigitNumber(numberDict, tensOf)
            if (temp) {
                numberLetter = numberLetter + "and" + temp
            }
            numberLetterCounts += numberLetter.length
            continue
        }

        if (n <= 9999) {
            const numberLetter = numberDict[n]
            numberLetterCounts += numberLetter.length
        }
    }

    return numberLetterCounts
}
