const solution = require("./solution.js")
const answer = require("./answer.js")

describe("[AMICABLE_NUMBERS] - Test solution:", () => {
    test("Validate invalid input", async () => {
        expect(solution("")).toEqual(0)
    })
    test("Input: 1000 - Get: 504", async () => {
        expect(solution(1000)).toEqual(504)
    })
    test("Input: 2000 - Get: 2898", async () => {
        expect(solution(2000)).toEqual(2898)
    })
    test("Input: 5000 - Get: 8442", async () => {
        expect(solution(5000)).toEqual(8442)
    })
    test("Input: 10000 - Get: 31626", async () => {
        expect(solution(10000)).toEqual(31626)
    })
})

describe("[AMICABLE_NUMBERS] - Test answer:", () => {
    test("Validate invalid input", async () => {
        expect(answer("")).toEqual(0)
    })
    test("Input: 1000 - Get: 504", async () => {
        expect(answer(1000)).toEqual(504)
    })
    test("Input: 2000 - Get: 2898", async () => {
        expect(answer(2000)).toEqual(2898)
    })
    test("Input: 5000 - Get: 8442", async () => {
        expect(answer(5000)).toEqual(8442)
    })
    test("Input: 10000 - Get: 31626", async () => {
        expect(answer(10000)).toEqual(31626)
    })
})
