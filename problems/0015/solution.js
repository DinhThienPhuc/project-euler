const { getPrimeFactors } = require("../../helpers/functions.js")

module.exports = (size) => {
    if (!Number.isInteger(size)) return 0

    let numeratorDict = {}
    let denominatorDict = {}

    for (let i = 0; i < size; i++) {
        const numerator = i + size + 1
        const denominator = i + 1

        const numberatorBases = getPrimeFactors(numerator)
        const denominatorBases = getPrimeFactors(denominator)

        numberatorBases.map((it) => {
            const maxExponent = Math.floor(Math.log(numerator) / Math.log(it))

            for (let e = maxExponent; e >= 1; e--) {
                const p = Math.pow(it, e)
                if (numerator % p === 0) {
                    if (numeratorDict[it]) {
                        numeratorDict[it] += e
                    } else {
                        numeratorDict[it] = e
                    }
                    break
                }
            }
        })

        denominatorBases.map((it) => {
            const maxExponent = Math.floor(Math.log(denominator) / Math.log(it))

            for (let e = maxExponent; e >= 1; e--) {
                const p = Math.pow(it, e)
                if (denominator % p === 0) {
                    if (denominatorDict[it]) {
                        denominatorDict[it] += e
                    } else {
                        denominatorDict[it] = e
                    }
                    break
                }
            }
        })
    }

    const newNumeratorDict = {}
    const newDenominatorDict = {}

    Object.keys(numeratorDict).map((base) => {
        if (denominatorDict[base]) {
            newNumeratorDict[base] = numeratorDict[base] - denominatorDict[base]
        } else {
            newNumeratorDict[base] = numeratorDict[base]
        }
    })

    Object.keys(denominatorDict).map((base) => {
        if (numeratorDict[base]) {
            newDenominatorDict[base] = 0
        } else {
            newDenominatorDict[base] = denominatorDict[base]
        }
    })

    let numerator = 1
    let denominator = 1

    Object.keys(newNumeratorDict).map((base) => {
        numerator *= Math.pow(base, newNumeratorDict[base])
    })

    Object.keys(newDenominatorDict).map((base) => {
        denominator *= Math.pow(base, newDenominatorDict[base])
    })

    return numerator / denominator
}
