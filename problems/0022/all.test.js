const solution = require("./solution.js")
const answer = require("./answer.js")
const { NAMES } = require("./input")

describe("[NAMES_SCORES] - Test solution:", () => {
    test("Validate invalid input", async () => {
        expect(solution({})).toEqual(0)
    })
    test("Input: <Test1> - Get: 791", async () => {
        expect(solution(["THIS", "IS", "ONLY", "A", "TEST"])).toEqual(791)
    })
    test("Input: <Test2> - Get: 1468", async () => {
        expect(
            solution(["I", "REPEAT", "THIS", "IS", "ONLY", "A", "TEST"])
        ).toEqual(1468)
    })
    test("Input: <Read from files> - Get: 871198282", async () => {
        expect(solution(NAMES)).toEqual(871198282)
    })
})

describe("[NAMES_SCORES] - Test answer:", () => {
    test("No answer recommended", async () => {
        expect(answer()).toBeNull()
    })
})
