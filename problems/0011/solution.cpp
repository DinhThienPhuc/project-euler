#include <iostream>
#include "input.h"
#include "../../helpers/functions.cpp"
using namespace std;

int main()
{
    long long result = 1;

    for (int r = 0; r < GRID_SIZE; r++)
    {
        for (int c = 0; c < GRID_SIZE; c++)
        {
            int adjacentInRow[ADJACENT_NUMBERS_RANGE];
            int adjacentInCol[ADJACENT_NUMBERS_RANGE];
            int adjacentInDownDiagonal[ADJACENT_NUMBERS_RANGE];
            int adjacentInUpDiagonal[ADJACENT_NUMBERS_RANGE];

            // Adjacent in row
            for (int i = 0; i < ADJACENT_NUMBERS_RANGE; i++)
            {
                if (c <= GRID_SIZE - ADJACENT_NUMBERS_RANGE)
                {
                    adjacentInRow[i] = GRID[r][c + i];
                }
                if (r <= GRID_SIZE - ADJACENT_NUMBERS_RANGE)
                {
                    adjacentInCol[i] = GRID[r + i][c];
                }
                if (r <= GRID_SIZE - ADJACENT_NUMBERS_RANGE && c <= GRID_SIZE - ADJACENT_NUMBERS_RANGE)
                {
                    adjacentInDownDiagonal[i] = GRID[r + i][c + i];
                }
                if (r >= ADJACENT_NUMBERS_RANGE - 1 && c <= GRID_SIZE - ADJACENT_NUMBERS_RANGE)
                {
                    adjacentInDownDiagonal[i] = GRID[r - i][c + i];
                }
            }
            long long products[4] = {
                getMultipleOfSet(adjacentInRow, ADJACENT_NUMBERS_RANGE),
                getMultipleOfSet(adjacentInCol, ADJACENT_NUMBERS_RANGE),
                getMultipleOfSet(adjacentInDownDiagonal, ADJACENT_NUMBERS_RANGE),
                getMultipleOfSet(adjacentInUpDiagonal, ADJACENT_NUMBERS_RANGE)};

            for (int i = 0; i < 4; i++)
            {
                if (products[i] > result)
                {
                    result = products[i];
                }
            }
        }
    };

    cout << result << endl;

    return 0;
}
