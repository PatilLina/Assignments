
////////////////////////////////////////////////////////////
//
//  File name :     program32_5.c
//  Description :   To demonstrate a hollow box pattern where
//                  column numbers are printed on the border
//                  and on the diagonal (i == j).
//  Author :        lina vijay patil
//  Date :          07/02/2026
//
////////////////////////////////////////////////////////////

/*
    INPUT:
        Rows = 6
        Columns = 6

    OUTPUT:
            1       2       3       4       5       6
            1       2                               6
            1               3                       6
            1                       4               6
            1                               5       6
            1       2       3       4       5       6
*/

////////////////////////////////////////////////////////////
//
//  REQUIRED HEADER FILES
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Prints column number on:
//                      - all borders
//                      - main diagonal (i == j)
//                  Prints blank space elsewhere.
//  Input :         int iRow, int iCol
//  Output :        Void
//
////////////////////////////////////////////////////////////

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if (iRow <= 0 || iCol <= 0)
    {
        printf("INVALID INPUT\n");
        printf("ROWS AND COLUMNS MUST BE POSITIVE\n");
        return;
    }

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i == 1 || i == iRow || j == 1 || j == iCol || i == j)
            {
                printf("%d\t", j);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of Rows:\n");
    scanf("%d", &iValue1);

    printf("Enter the number of Columns:\n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}

////////////////////////////////////////////////////////////
//
//  Test Cases
//
////////////////////////////////////////////////////////////

//----------------------------------------------------------
// Test Case 1
// Input:
//      6 6
// Output:
//      1   2   3   4   5   6
//      1   2               6
//      1       3           6
//      1           4       6
//      1               5   6
//      1   2   3   4   5   6
//----------------------------------------------------------

//----------------------------------------------------------
// Test Case 2
// Input:
//      4 4
// Output:
//      1   2   3   4
//      1   2       4
//      1       3   4
//      1   2   3   4
//----------------------------------------------------------

//----------------------------------------------------------
// Test Case 3
// Input:
//      5 8
// Output:
//      1   2   3   4   5   6   7   8
//      1   2                       8
//      1       3                   8
//      1           4               8
//      1   2   3   4   5   6   7   8
//----------------------------------------------------------

//----------------------------------------------------------
// Invalid Input
// Input:
//      0 5
// Output:
//      INVALID INPUT
//      ROWS AND COLUMNS MUST BE POSITIVE
//----------------------------------------------------------
