const solution = require("./solution.js")
const answer = require("./answer.js")

describe("[NUMBER_LETTER_COUNTS] - Test solution:", () => {
    test("Validate invalid input", async () => {
        expect(solution({})).toEqual(0)
    })
    test("Input: 5 - Get: 19", async () => {
        expect(solution(5)).toEqual(19)
    })
    test("Input: 150 - Get: 1903", async () => {
        expect(solution(150)).toEqual(1903)
    })
    test("Input: 1000 - Get: 21124", async () => {
        expect(solution(1000)).toEqual(21124)
    })
})

describe("[NUMBER_LETTER_COUNTS] - Test answer:", () => {
    test("No answer recommended", async () => {
        expect(answer()).toBeNull()
    })
})
