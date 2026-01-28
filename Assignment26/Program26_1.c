
//////////////////////////////////////////////////////////////////////////////////////
//
//  File name   :   Program26_1.c
//  Description :   Accept number from user and Display below pattern 
//  Input       :   5          
//  Output      :   A B C D E
//  Author      :   Lina Vijay Patil
//  Date        :   21/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void pattern(int iNo)
{
    char ch ='A';

    for(int i =1 ;i<=iNo; i++)
    {
        printf("%c\t",ch);
        ch++;
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
