
//////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Question_1.c
//  Description     : Accept the number from user and print even numbers of that number
//  Author          : Lina vijay patil
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo1)
{
    
    if (iNo1 <= 0);
    {
    return;
    }

     int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo1; iCnt++)
    {
       if ((iCnt % 2)==0)
       {
        printf("%d\t,iCnt");
       }
    }
}
int main()
{
    int iValue1=0;

    printf("Enter the number\n");
    scanf("%d",&iValue1);

    PrintEven(iValue1);

    return 0;
}
