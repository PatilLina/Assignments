
/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Accept no from user and  used to print * on Screen      
//  Input :         integer
//  Output :        *
//  Author :        lina vijay patil
//  Date :          21/10/2025
//
/////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    if(iNo < 0)               //UPDATOR
    {
        iNo =  -iNo;                     
    }

     while (iNo > 0)
     {
        printf("*");
        iNo --;
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
//  Input4 :0       Output : Nothing printed
//  Input5 :2       Output : **
//
/////////////////////////////////////////////////////////////////
