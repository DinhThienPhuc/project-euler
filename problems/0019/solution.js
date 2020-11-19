const isLeapYear = (year) => {
    if (year % 100 !== 0) {
        return year % 4 === 0
    } else {
        return year % 400 === 0
    }
}

// Monday - Sunday: 2-8
// January - December: 1-12

module.exports = (baseYear, startYear, endYear) => {
    if (!Number.isInteger(baseYear)) return 0
    if (!Number.isInteger(startYear)) return 0
    if (!Number.isInteger(endYear)) return 0

    let daysFromBaseToStartYear = 0
    const dayRemaindedByMonth = {
        1: 3,
        2: 0,
        3: 3,
        4: 2,
        5: 3,
        6: 2,
        7: 3,
        8: 3,
        9: 2,
        10: 3,
        11: 2,
        12: 3,
    }

    // if first day of July is monday: monday is 1, so 29 also monday. and 31 is wednesday.
    // as a result, first day of August is thursday.
    // First of July: 2 (monday) -> First of August: 5 (thursday) = 2 + dayRemaindedByMonth[7];

    // 1 January 1900 was a Monday.
    // If 1 January of year X is Monday, so 1 January of year X+1 is Tuesday (Monday + 1) if year X has 365 days.

    for (let y = baseYear; y < startYear; y++) {
        if (isLeapYear(y)) {
            daysFromBaseToStartYear += 366
        } else {
            daysFromBaseToStartYear += 365
        }
    }

    let firstDayOfPreviousMonth = (daysFromBaseToStartYear % 7) + 2
    let currentMonth = 2
    let currentYear = startYear
    let countSundays = firstDayOfPreviousMonth === 8 ? 1 : 0

    while (currentYear < endYear + 1) {
        const previousMonth = currentMonth === 1 ? 12 : currentMonth - 1
        let previousMonthDaysRemain = dayRemaindedByMonth[previousMonth]
        if (isLeapYear(currentYear) && previousMonth === 2) {
            previousMonthDaysRemain = dayRemaindedByMonth[previousMonth] + 1
        }
        let firstDayOfCurrentMonth =
            firstDayOfPreviousMonth + previousMonthDaysRemain
        firstDayOfCurrentMonth =
            firstDayOfCurrentMonth > 8
                ? firstDayOfCurrentMonth - 7
                : firstDayOfCurrentMonth
        firstDayOfPreviousMonth = firstDayOfCurrentMonth

        if (firstDayOfCurrentMonth === 8) {
            countSundays += 1
        }

        if (currentMonth === 12) {
            currentMonth = 1
            currentYear += 1
        } else {
            currentMonth += 1
        }
    }

    return countSundays
}
