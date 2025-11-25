
////////////////////////////////////////////////////////////
// 
//  File name :     Question3.java
//  Description :   To find factorial of a number using for loop
//  Author :        lina vijay patil
//  Date :          03/11/2025
//
////////////////////////////////////////////////////////////

class Logic
{
    int CalculateFactorial(int iNo)
    {
        int iFact = 1;

        for (int iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        return iFact;
    }
}

class Quetion3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
    
        int iRet = lobj.CalculateFactorial(5);

        System.out.println("Factorial of is: " + iRet);
    }
}
