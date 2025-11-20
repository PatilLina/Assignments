
/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   used to print Hello if no is less than 10,
//                  OtherWise prints Demo
//  Input :         integer
//  Output :        Hello or Demo
//  Author :        Lina vijay patil
//  Date :          21/10/2025
//
/////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    if (iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;

    printf("Enter the number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}
/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//
//  Input1 :1       Output : Hello
//  Input2 :3       Output : Hello
//  Input3 :10      Output : Hello
//  Input4 :11      Output : Demo
//  Input5 :15      Output : Demo
//
/////////////////////////////////////////////////////////////////
