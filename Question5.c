
/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//
//  Function Name : Accept
//  Description :   Used to print the "*" on Screen        
//  Input :         integer
//  Output :        Prints  * on the Screen  
//  Author :        lina vijay patil
//  Date :          20/10/2025
//
/////////////////////////////////////////////////////////////////
void Accept(int iNo)
{
    int iCnt=0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
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
       iValue = 5;

       printf("Accept Number : ");
       scanf("%d",&iValue);
       
       Accept(iValue);

      return  0;
}
/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//
//  Input1 : 10          Output :**********  
//  Input1 : 5           Output :*****
//  Input1 : 4           Output :****
//  Input1 : 3           Output :***  
//  Input1 : 2           Output :**
//
/////////////////////////////////////////////////////////////////
