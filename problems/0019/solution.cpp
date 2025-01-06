#include <iostream>
#include <map>
#include "input.h"
using namespace std;

bool isLeapYear(int year)
{
    if (year % 100 != 0)
    {
        return year % 4 == 0;
    }
    else
    {
        return year % 400 == 0;
    }
}

// Monday - Sunday: 2-8
// January - December: 1-12

int main()
{
    // 1 January 1900 was a Monday.
    int daysFromBaseToStartYear = 0;
    map<int, int> daysRemainingInMonth;

    daysRemainingInMonth[1] = 3;
    daysRemainingInMonth[2] = 0;
    daysRemainingInMonth[3] = 3;
    daysRemainingInMonth[4] = 2;
    daysRemainingInMonth[5] = 3;
    daysRemainingInMonth[6] = 2;
    daysRemainingInMonth[7] = 3;
    daysRemainingInMonth[8] = 3;
    daysRemainingInMonth[9] = 2;
    daysRemainingInMonth[10] = 3;
    daysRemainingInMonth[11] = 2;
    daysRemainingInMonth[12] = 3;

    // if first day of July is monday: monday is 1, so 29 also monday. and 31 is wednesday.
    // as a result, first day of August is thursday.
    // First of July: 2 (monday) -> First of August: 5 (thursday) = 2 + daysRemainingInMonth[7];

    for (int y = BASE_YEAR; y < START_YEAR; y++)
    {
        if (isLeapYear(y))
        {
            daysFromBaseToStartYear += 366;
        }
        else
        {
            daysFromBaseToStartYear += 365;
        }
    }

    int firstDayOfPreviousMonth = daysFromBaseToStartYear % 7 + 2;
    int currentMonth = 2;
    int currentYear = START_YEAR;
    int countSundays = firstDayOfPreviousMonth == 8 ? 1 : 0;

    while (currentYear < END_YEAR + 1)
    {
        int previousMonth = currentMonth == 1 ? 12 : currentMonth - 1;
        int previousMonthDaysRemain = daysRemainingInMonth[previousMonth];
        if (isLeapYear(currentYear) && previousMonth == 2)
        {
            previousMonthDaysRemain = daysRemainingInMonth[previousMonth] + 1;
        }
        int firstDayOfCurrentMonth = firstDayOfPreviousMonth + previousMonthDaysRemain;
        firstDayOfCurrentMonth = firstDayOfCurrentMonth > 8 ? firstDayOfCurrentMonth - 7 : firstDayOfCurrentMonth;
        firstDayOfPreviousMonth = firstDayOfCurrentMonth;

        if (firstDayOfCurrentMonth == 8)
        {
            countSundays += 1;
        }

        if (currentMonth == 12)
        {
            currentMonth = 1;
            currentYear += 1;
        }
        else
        {
            currentMonth += 1;
        }
    }

    cout << "C++: " << countSundays << "  - (solution)" << endl;

    return 0;
}
