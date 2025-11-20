
/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to print * on Screen      
//  Input :         integer,integer
//  Output :        *
//  Author :        lina vijay patil
//  Date :          21/10/2025
// 
/////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)               //UPDATOR
    {
        iNo =  -iNo;                     
    }

    
    while(iCnt < iNo)
    {
      printf("*");
      iCnt++;
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

    printf("Enter the Number");
    scanf("%d",&iValue);

    Display (iValue);

    return 0;
}
/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//
//  Input1 :1       Output : *
//  Input2 :-3      Output : ***
//  Input3 :-2      Output : **
//  Input4 :4       Output : ****
//  Input5 :2       Output : **
//
/////////////////////////////////////////////////////////////////
