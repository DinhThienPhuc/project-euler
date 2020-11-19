const solution = require("./solution.js")
const answer = require("./answer.js")

describe("[FACTORIAL_DIGIT_SUM] - Test solution:", () => {
    test("Validate invalid input", async () => {
        expect(solution({})).toEqual(0)
    })
    test("Input: 10 - Get: 27", async () => {
        expect(solution(10)).toEqual(27)
    })
    test("Input: 25 - Get: 72", async () => {
        expect(solution(25)).toEqual(72)
    })
    test("Input: 50 - Get: 216", async () => {
        expect(solution(50)).toEqual(216)
    })
    test("Input: 75 - Get: 432", async () => {
        expect(solution(75)).toEqual(432)
    })
    test("Input: 100 - Get: 648", async () => {
        expect(solution(100)).toEqual(648)
    })
})

describe("[FACTORIAL_DIGIT_SUM] - Test answer:", () => {
    test("No answer recommended", async () => {
        expect(answer()).toBeNull()
    })
})
