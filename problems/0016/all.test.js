const solution = require("./solution.js")
const answer = require("./answer.js")

describe("[POWER_DIGIT_SUM] - Test solution:", () => {
    test("Validate invalid input", async () => {
        expect(solution([])).toEqual(0)
    })
    test("Input: 15 - Get: 26", async () => {
        expect(solution(15)).toEqual(26)
    })
    test("Input: 128 - Get: 166", async () => {
        expect(solution(128)).toEqual(166)
    })
    test("Input: 1000 - Get: 1366", async () => {
        expect(solution(1000)).toEqual(1366)
    })
})

describe("[POWER_DIGIT_SUM] - Test answer:", () => {
    test("Get No recommended answer message", async () => {
        expect(answer()).toBeNull()
    })
})
