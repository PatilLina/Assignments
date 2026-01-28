
/////////////////////////////////////////////////////////////////////////////////////
//
//  File name   :   program26_4.c
//  Description :   Accept number from user and Display below pattern 
//  Input       :   4          
//  Output      :   # 1 * # 2 * #  3 * # 4 *   
//  Author      :   Lina Vijay Patil
//  Date        :   21/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void pattern(int iNo)
{
     int iCnt=0;

    for(iCnt = 1;iCnt <=iNo ; iCnt++)
    {
        printf("#\t %d \t* \t",iCnt);
       
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
