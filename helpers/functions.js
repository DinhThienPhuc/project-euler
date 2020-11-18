const isPrime = (number) => {
    if (!Number.isInteger(number)) return false
    if (number == 1) return false
    if (number < 4) return true //2 and 3 are prime
    if (number % 2 == 0) return false
    if (number < 9) return true //we have already excluded 4,6 and 8.
    if (number % 3 == 0) return false

    const r = Math.floor(Math.sqrt(number)) // sqrt(n) rounded to the greatest integer r so that r*r<=n
    let f = 5

    while (f <= r) {
        if (number % f == 0) return false
        if (number % (f + 2) == 0) return false
        f = f + 6
    }

    return true
}

const isPalindrome = (number) => {
    if (!Number.isInteger(number)) return false
    let digits = (number + "").split("")
    digits = digits.reverse()
    const reverseNumber = +digits.join("")
    return reverseNumber === number
}

const getGreatestMultiple = (a, b) => {
    if (!Number.isInteger(a) || !Number.isInteger(b)) return 1
    const less = a > b ? b : a
    const greater = a > b ? a : b
    let greatestMultiple = 1

    for (let i = less; i >= 1; i--) {
        if (less % i == 0 && greater % i == 0) {
            greatestMultiple = i
            break
        }
    }
    return greatestMultiple
}

const getSmallestMultiple = (a, b) => {
    if (!Number.isInteger(a) || !Number.isInteger(b)) return 1
    return Math.abs(a * b) / getGreatestMultiple(a, b)
}

const getPrimesLessThan = (number) => {
    const arr = []
    if (!Number.isInteger(number)) return arr
    for (let i = 2; i <= number; i++) {
        if (isPrime(i)) {
            arr.push(i)
        }
    }
    return arr
}

const getMultipleOfSet = (set = [], range = 0) => {
    if (set.includes(0)) return 0
    let result = 1
    for (let i = 0; i < range; i++) {
        result *= set[i]
    }
    return result
}

const isPerfectSquare = (x) => {
    if (!Number.isInteger(x)) return false
    const sqrt = Math.sqrt(x)
    return sqrt - Math.floor(sqrt) === 0
}

const getGreatestCommonDivisor = (a, b) => {
    if (!Number.isInteger(a) || !Number.isInteger(b)) return 0
    if (b == 0) return a
    return getGreatestCommonDivisor(b, a % b)
}

const getPrimeFactors = (number) => {
    const arr = []
    if (!Number.isInteger(number)) return arr

    // Print the number of 2s that divide n
    let hasThisPrime = false
    while (number % 2 == 0) {
        if (!hasThisPrime) {
            arr.push(2)
            hasThisPrime = true
        }
        number = number / 2
    }

    // n must be odd at this point. So we can skip one element (Note i = i +2)
    for (let i = 3; i <= Math.sqrt(number); i += 2) {
        // While i divides n, print i and divide n
        let hasThisPrime = false
        while (number % i == 0) {
            if (!hasThisPrime) {
                arr.push(i)
                hasThisPrime = true
            }
            number = number / i
        }
    }

    // This condition is to handle the case when n is a prime number greater than 2
    if (number > 2) {
        arr.push(number)
    }

    return arr
}

const factorial = (number) => {
    if (!Number.isInteger(number)) return 0
    return number == 1 || number == 0 ? 1 : number * factorial(number - 1)
}

const factorialPartion = (start, end) => {
    if (!Number.isInteger(start) || !Number.isInteger(end)) return 0
    let result = 1

    for (let i = start; i <= end; i++) {
        result *= i
    }

    return result
}

const getBaseExponentDict = (number, bases = []) => {
    const baseExponentDict = {}
    if (!Number.isInteger(number)) return baseExponentDict

    for (let i = 0; i < bases.length; i++) {
        const primeFactor = bases[i]
        let maxExponent = Math.floor(Math.log(number) / Math.log(primeFactor))

        for (let e = maxExponent; e >= 1; e--) {
            let p = Math.pow(primeFactor, e)
            if (number % p == 0) {
                if (baseExponentDict[primeFactor]) {
                    baseExponentDict[primeFactor] += e
                } else {
                    baseExponentDict[primeFactor] = e
                }
                break
            }
        }
    }

    return baseExponentDict
}

module.exports = {
    isPrime,
    isPalindrome,
    getGreatestMultiple,
    getSmallestMultiple,
    getPrimesLessThan,
    getMultipleOfSet,
    isPerfectSquare,
    getGreatestCommonDivisor,
    getPrimeFactors,
    factorial,
    factorialPartion,
    getBaseExponentDict,
}
