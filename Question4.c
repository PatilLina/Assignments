
/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description :   It is used to check no is Divisible 5 or not on Screen       
//  Input :         integer
//  Output :        true or false
//  Author :        Varal Rutuja Bharat
//  Date :          20/10/2025
//
/////////////////////////////////////////////////////////////////
bool Check(int iNo)
{
    if((iNo % 5)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

  
/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{   
   int iValue = 0;
   bool bRet = false;

   printf("Enter the Number");
   scanf("%d",&iValue);

   bRet = Check(iValue);
   if(bRet == true)
   {
    printf("Divisible by 5");
   } 
   else
   {
    printf("Not Divisible by 5");
   }
    return  0;
}
/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//
//  Input1 : 10          Output :Divisible by 5  
//  Input1 : 1           Output :Not Divisible by 5
//  Input1 : 14          Output :Not Divisble by 5
//  Input1 :-15          Output :Divisible by 5  
//  Input1 : 0           Output :Divisible by 5 
//
/////////////////////////////////////////////////////////////////
