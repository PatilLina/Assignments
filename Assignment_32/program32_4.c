
////////////////////////////////////////////////////////////
//
//  File name :     program32_4.c
//  Description :   To demonstrate a hollow box pattern where
//                  '*' is printed on the border and diagonal,
//                  '#' is printed above the diagonal, and
//                  '@' is printed below the diagonal.
//  Author :        Lina Vijay Patil
//  Date :          07/02/2026
//
////////////////////////////////////////////////////////////

/*
    INPUT:
        Rows = 6
        Columns = 6

    OUTPUT:
            *       *       *       *       *       *
            *       #       #       #       *       *
            *       #       #       *       @       *
            *       #       *       @       @       *
            *       *       @       @       @       *
            *       *       *       *       *       *
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
//  Description :   Prints '*' on border/diagonal,
//                  '#' above diagonal,
//                  '@' below diagonal.
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
        for (j = iCol; j >= 1; j--)
        {
            if (i == 1 || i == iRow || j == 1 || j == iCol || i == j)
            {
                printf("*\t");
            }
            else if (i > j)
            {
                printf("@\t");
            }
            else
            {
                printf("#\t");
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
//      *   *   *   *   *   *
//      *   #   #   #   *   *
//      *   #   #   *   @   *
//      *   #   *   @   @   *
//      *   *   @   @   @   *
//      *   *   *   *   *   *
//
//----------------------------------------------------------
// Test Case 2
// Input:
//      4 4
// Output:
//      *   *   *   *
//      *   #   *   *
//      *   *   @   *
//      *   *   *   *
//
//----------------------------------------------------------
// Test Case 3
// Input:
//      5 5
// Output:
//      *   *   *   *   *
//      *   #   #   #   *
//      *   #   *   @   *
//      *   #   @   @   *
//      *   *   *   *   *
//
//----------------------------------------------------------
// Invalid Input Example
// Input:
//      0 -5
// Output:
//      INVALID INPUT
//      ROWS AND COLUMNS MUST BE POSITIVE
//
////////////////////////////////////////////////////////////
