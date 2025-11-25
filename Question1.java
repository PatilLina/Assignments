
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Question1.java
//  Description     : To calculate the sum of natural numbers
//  Author          : lina vijay patil
//  Date            : 3/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class SumDigits
{
    int CalculateSum(int iNo)
    {
      int iSum = 0 ;
      for (int iCnt = 1; iCnt <= iNo ; iCnt ++)
      {
        iSum = iSum+iCnt;
      }
      return iSum;
    }
}
class Quetion1 
{
    public static void main(String A[])

{
    int iRet = 0;
    SumDigits sObj = new SumDigits();
    iRet = sObj.CalculateSum(10);
    System.out.println("Sum of First 10 numbers is : "+ iRet);
}
}
