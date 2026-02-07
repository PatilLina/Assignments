
////////////////////////////////////////////////////////////
//
//  File name :     program30_5.java
//  Description :   To demonstrate hollow box pattern where
//                  numbers are printed on the border and
//                  '*' is printed inside the box.
//  Author :        Lina Vijay Patil
//  Date :          07/02/2026
//
////////////////////////////////////////////////////////////

import java.util.Scanner;

class Pattern
{
    ////////////////////////////////////////////////////////////
    //
    //  Function Name :  Display
    //  Description :    Prints numbers on the border and '*'
    //                   inside the box.
    //  Input :          Integer (iRow), Integer (iCol)
    //  Output :         Void
    //  Author :         Lina Vijay patil
    //  Date :           02/07/2026
    //
    ////////////////////////////////////////////////////////////

    void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;
        if (iRow <= 0 || iCol <= 0)
        {
            System.out.println("INVALID INPUT");
            System.out.println("ROWS AND COLUMNS MUST BE POSITIVE");
            return;
        }

        for (i = 1; i <= iRow; i++)
        {
            for (j = 1; j <= iCol; j++)
            {
                if (i == 1 || i == iRow || j == 1 || j == iCol)
                {
                    System.out.print(j + "\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }
    }
    
}
////////////////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
////////////////////////////////////////////////////////////

class program30_5
{

    public static void main(String[] A)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;

        System.out.println("Enter the number of Rows:");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Columns:");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1, iValue2);

        sobj.close();
    }
}
// End of main


////////////////////////////////////////////////////////////
//
//  Test Cases
//
////////////////////////////////////////////////////////////
//
//  Input : 6 6
//  Output :
//      1   2   3   4   5   6
//      1   *   *   *   *   6
//      1   *   *   *   *   6
//      1   *   *   *   *   6
//      1   *   *   *   *   6
//      1   2   3   4   5   6
//
// --------------------------------------------------------
//
//  Input : 4 5
//  Output :
//      1   2   3   4   5
//      1   *   *   *   5
//      1   *   *   *   5
//      1   2   3   4   5
//
// --------------------------------------------------------
//
//  Input : 0 5 or -5 5
//  Output :
//      INVALID INPUT
//      ROWS AND COLUMNS MUST BE POSITIVE
//
////////////////////////////////////////////////////////////
