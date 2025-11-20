
///////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Question3.c
//  Description     : Accept the number from user and print factors of that number
//  Author          : Lina vijay patil
//  Date            : 21/10/2025
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void DisplayFactor(int iNo)
{
    if (iNo <= 0)
    {
        return;
    }
int iCnt = 0 ;
for (iCnt =1 ; iCnt <= iNo/2 ; iCnt++)
{
    if ((iNo%iCnt)==0)
    {
        printf("%d\t",iCnt);

    }
}
}
int main()
{
    int iValue = 0 ;
    
    printf("Enter your number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);


return 0;

}
