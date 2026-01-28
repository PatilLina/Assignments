
/////////////////////////////////////////////////////////////////////////////////////
//
//  File name   :   program26_5.c
//  Description :   Accept number from user and Display below pattern 
//  Input       :   8         
//  Output      :   2 4 6 8 10 11 12 14 
//  Author      :   lina vijay patil
//  Date        :   21/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void pattern(int iNo)
{
     int iCnt=0;

    for(iCnt = 2; iCnt <= 2*iNo ; iCnt++)
    {
        if(iCnt%2==0)
        {
        printf(" %d\t",iCnt);
        }
    }
}
int main()

{
    int iValue=0;
    
    printf("Enter the number of Elements:");
    scanf("%d",&iValue);
    pattern(iValue);
    return 0;

}
