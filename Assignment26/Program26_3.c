
/////////////////////////////////////////////////////////////////////////////////////
//
//  File name   :   program26_3.c
//  Description :   Accept number from user and Display below pattern 
//  Input       :   5          
//  Output      :   1 * 2 * 3 * 4 * 5 * 
//  Author      :   Lina vijay Patil
//  Date        :   21/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void pattern(int iNo)
{
     int iCnt=0;

    for(iCnt = 1;iCnt <=iNo ; iCnt++)
    {
        printf("%d\t*\t",iCnt);
       
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
