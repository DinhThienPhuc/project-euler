const SUBTRACT_RANGE = 64

module.exports = (names) => {
    const sortedNames = [...names].sort(function (a, b) {
        if (a < b) return -1
        if (a > b) return 1
        return 0
    })

    let score = 0
    for (let i = 0, len = sortedNames.length; i < len; i++) {
        const firstName = sortedNames[i]
        const strLen = firstName.length
        let strSum = 0
        for (let j = 0; j < strLen; j++) {
            strSum += firstName.charCodeAt(j) - SUBTRACT_RANGE
        }
        score += strSum * (i + 1)
    }

    return score
}
