const solution = require("./solution.js")
const answer = require("./answer.js")

describe("[NAMES_SCORES] - Test solution:", () => {
    test("Validate invalid input", async () => {
        expect(solution()).toEqual()
    })
})

describe("[NAMES_SCORES] - Test answer:", () => {
    test("No answer recommended", async () => {
        expect(answer()).toEqual()
    })
})
