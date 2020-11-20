module.exports = (limit) => {
    if (!Number.isInteger(limit)) return 0

    let num = limit
    let sum = 1
    let p = 2

    while (p * p <= num && num > 1) {
        if (num % p === 0) {
            let j = p * p
            num = Math.floor(num / p)

            while (num % p === 0) {
                j = j * p
                num = Math.floor(num / p)
            }
            sum = sum * (j - 1)
            sum = Math.floor(sum / (p - 1))
        }

        if (p === 2) {
            p = 3
        } else {
            p = p + 2
        }
    }

    if (num > 1) {
        sum = sum * (num + 1)
    }

    return sum - limit
}
