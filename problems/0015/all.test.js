const solution = require("./solution.js")
const answer = require("./answer.js")

describe("[LATTICE_PATHS] - Test solution:", () => {
    test("Size: invalid, get lattice paths: 0", async () => {
        expect(solution("")).toEqual(0)
    })
    test("Size: 4, get lattice paths: 70", async () => {
        expect(solution(4)).toEqual(70)
    })
    test("Size: 9, get lattice paths: 48620", async () => {
        expect(solution(9)).toEqual(48620)
    })
    test("Size: 20, get lattice paths: 137846528820", async () => {
        expect(solution(20)).toEqual(137846528820)
    })
})

describe("[LATTICE_PATHS] - Test answer:", () => {
    test("Size: invalid, get lattice paths: 0", async () => {
        expect(answer("")).toEqual(0)
    })
    test("Size: 4, get lattice paths: 70", async () => {
        expect(answer(4)).toEqual(70)
    })
    test("Size: 9, get lattice paths: 48620", async () => {
        expect(answer(9)).toEqual(48620)
    })
    test("Size: 20, get lattice paths: 137846528820", async () => {
        expect(answer(20)).toEqual(137846528820)
    })
})
