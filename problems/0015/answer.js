module.exports = (size) => {
    if (!Number.isInteger(size)) return 0

    let result = 1

    for (let i = 1; i <= size; i++) {
        result = (result * (size + i)) / i
    }

    return result
}
