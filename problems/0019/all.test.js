const solution = require("./solution.js")
const answer = require("./answer.js")

describe("[COUNTING_SUNDAYS] - Test solution:", () => {
    test("Validate invalid input", async () => {
        expect(solution({}, "", true)).toEqual(0)
    })
    test("Input: 1900, 1943, 1946 - Get: 6", async () => {
        expect(solution(1900, 1943, 1946)).toEqual(6)
    })
    test("Input: 1900, 1995, 2000 - Get: 10", async () => {
        expect(solution(1900, 1995, 2000)).toEqual(10)
    })
    test("Input: 1900, 1901, 2000 - Get: 171", async () => {
        expect(solution(1900, 1901, 2000)).toEqual(171)
    })
})

describe("[COUNTING_SUNDAYS] - Test answer:", () => {
    test("No answer recommended", async () => {
        expect(answer()).toBeNull()
    })
})
