const {
    isPrime,
    isPalindrome,
    getGreatestMultiple,
    getSmallestMultiple,
    getPrimesLessThan,
    isPerfectSquare,
    getGreatestCommonDivisor,
    getPrimeFactors,
    factorial,
    factorialPartion,
    getBaseExponentDict,
} = require("./functions")

describe("Check function [isPrime]:", () => {
    test("empty string should be false", async () => {
        expect(isPrime("")).toEqual(false)
    })
    test("number string should be false", async () => {
        expect(isPrime("12")).toEqual(false)
    })
    test("falsy value should be false", async () => {
        expect(isPrime(null)).toEqual(false)
    })
    test("boolean value should be false", async () => {
        expect(isPrime(true)).toEqual(false)
    })
    test("object value should be false", async () => {
        expect(isPrime({})).toEqual(false)
    })
    test("1 is not prime number", async () => {
        expect(isPrime(1)).toEqual(false)
    })
    test("2 is prime number", async () => {
        expect(isPrime(2)).toEqual(true)
    })
    test("3 is prime number", async () => {
        expect(isPrime(3)).toEqual(true)
    })
    test("4 is not prime number", async () => {
        expect(isPrime(4)).toEqual(false)
    })
    test("5 is prime number", async () => {
        expect(isPrime(5)).toEqual(true)
    })
    test("13 is prime number", async () => {
        expect(isPrime(13)).toEqual(true)
    })
})

describe("Check function [isPalindrome]:", () => {
    test("empty string should be false", async () => {
        expect(isPalindrome("")).toEqual(false)
    })
    test("number string should be false", async () => {
        expect(isPalindrome("12")).toEqual(false)
    })
    test("falsy value should be false", async () => {
        expect(isPalindrome(null)).toEqual(false)
    })
    test("boolean value should be false", async () => {
        expect(isPalindrome(true)).toEqual(false)
    })
    test("object value should be false", async () => {
        expect(isPalindrome({})).toEqual(false)
    })
    test("7 should be true", async () => {
        expect(isPalindrome(7)).toEqual(true)
    })
    test("17 should be false", async () => {
        expect(isPalindrome(17)).toEqual(false)
    })
    test("171 should be true", async () => {
        expect(isPalindrome(171)).toEqual(true)
    })
    test("1357531 should be true", async () => {
        expect(isPalindrome(1357531)).toEqual(true)
    })
})

describe("Check function [getGreatestMultiple]:", () => {
    test("invalid input should return 1", async () => {
        expect(getGreatestMultiple("", [])).toEqual(1)
    })
    test("get 1 if they are both prime", async () => {
        const a = 7
        const b = 13
        expect(getGreatestMultiple(a, b)).toEqual(1)
    })
    test("get less if greater is mod of less", async () => {
        const a = 12
        const b = 36
        expect(getGreatestMultiple(a, b)).toEqual(a)
    })
    test("get great multiple", async () => {
        const a = 24
        const b = 36
        expect(getGreatestMultiple(a, b)).toEqual(12)
    })
})

describe("Check function [getSmallestMultiple]:", () => {
    test("invalid input should return 1", async () => {
        expect(getSmallestMultiple("", [])).toEqual(1)
    })
    test("get multiple of them if they are both prime", async () => {
        const a = 7
        const b = 13
        expect(getSmallestMultiple(a, b)).toEqual(a * b)
    })
    test("get greater if greater is mod of less", async () => {
        const a = 12
        const b = 36
        expect(getSmallestMultiple(a, b)).toEqual(b)
    })
    test("get smallest multiple", async () => {
        const a = 24
        const b = 36
        expect(getSmallestMultiple(a, b)).toEqual(72)
    })
})

describe("Check function [getPrimesLessThan]:", () => {
    test("invalid input should return []", async () => {
        expect(getPrimesLessThan("")).toEqual([])
    })
    test("get primes less than input number", async () => {
        expect(getPrimesLessThan(15)).toEqual([2, 3, 5, 7, 11, 13])
    })
    test("get primes less than input number", async () => {
        expect(getPrimesLessThan(23)).toEqual([2, 3, 5, 7, 11, 13, 17, 19, 23])
    })
})

describe("Check function [isPerfectSquare]:", () => {
    test("invalid input should return []", async () => {
        expect(isPerfectSquare("")).toEqual(false)
    })
    test("8 is not a perfect square", async () => {
        expect(isPerfectSquare(8)).toEqual(false)
    })
    test("16 is perfect square", async () => {
        expect(isPerfectSquare(16)).toEqual(true)
    })
    test("81 is perfect square", async () => {
        expect(isPerfectSquare(81)).toEqual(true)
    })
})

describe("Check function [getGreatestCommonDivisor]:", () => {
    test("invalid input should return 0", async () => {
        expect(getGreatestCommonDivisor("", [])).toEqual(0)
    })
    test("GCD of 2 primes is 1", async () => {
        expect(getGreatestCommonDivisor(7, 13)).toEqual(1)
    })
    test("GCD of 2 normal numbers", async () => {
        expect(getGreatestCommonDivisor(16, 12)).toEqual(4)
    })
})

describe("Check function [getPrimeFactors]:", () => {
    test("invalid input should return 0", async () => {
        expect(getPrimeFactors("abc")).toEqual([])
    })
    test("Prime factors of 12", async () => {
        expect(getPrimeFactors(12)).toEqual([2, 3])
    })
    test("Prime factors of 17", async () => {
        expect(getPrimeFactors(17)).toEqual([17])
    })
    test("Prime factors of 30", async () => {
        expect(getPrimeFactors(30)).toEqual([2, 3, 5])
    })
})

describe("Check function [factorial]:", () => {
    test("invalid input should return 0", async () => {
        expect(factorial("abc")).toEqual(0)
    })
    test("Factorial of 1", async () => {
        expect(factorial(1)).toEqual(1)
    })
    test("Factorial of 4", async () => {
        expect(factorial(4)).toEqual(24)
    })
    test("Factorial of 5", async () => {
        expect(factorial(5)).toEqual(120)
    })
})

describe("Check function [factorialPartion]:", () => {
    test("invalid input should return 0", async () => {
        expect(factorialPartion("abc")).toEqual(0)
    })
    test("Factorial of 2 and 4", async () => {
        expect(factorialPartion(2, 4)).toEqual(24)
    })
    test("Factorial of 3 and 5", async () => {
        expect(factorialPartion(3, 5)).toEqual(60)
    })
    test("Factorial of 4 and 8", async () => {
        expect(factorialPartion(4, 8)).toEqual(6720)
    })
})

describe("Check function [getBaseExponentDict]:", () => {
    test("invalid input should return 0", async () => {
        expect(getBaseExponentDict("abc", 123)).toEqual({})
    })
    test("Base exponent dictionary of 24", async () => {
        expect(getBaseExponentDict(24, [2, 3])).toEqual({ 2: 3, 3: 1 })
    })
    test("Base exponent dictionary of 40", async () => {
        expect(getBaseExponentDict(40, [2, 5])).toEqual({ 2: 3, 5: 1 })
    })
    test("Base exponent dictionary of 120", async () => {
        expect(getBaseExponentDict(120, [2, 3, 5])).toEqual({
            2: 3,
            3: 1,
            5: 1,
        })
    })
})
