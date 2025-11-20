/////////////////////////////////////////////////////////////
//
// Required Header files
//
/////////////////////////////////////////////////////////////

#include<stdio.h>               // For Input Output
#include<stdbool.h>             // For bool datatype

/////////////////////////////////////////////////////////////
//
//  Function Name :     CheckEvenOdd
//  Description :       It is used to check even or odd
//  Input :             Integer
//  Output :            Boolean
//  Author :            Lina vijay patil
//  Date :              21/10/2025
//
/////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;

    if(iRem == 0)
    {   return true;    }
    else
    {   return false;   }
}

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {   printf("%d is Even number\n",iValue);   }
    else
    {   printf("%d is Odd number\n",iValue);    }

    return 0;
}
/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//
//  Input1 :1       Output : 1 is Odd number
//  Input2 :3       Output : 3 is Odd number
//  Input3 :10      Output : 10 is Even number
//  Input4 :11      Output : 11 is Odd number
//  Input5 :2       Output : 2 is Even number
//
/////////////////////////////////////////////////////////////////