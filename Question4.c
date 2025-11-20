
#include<stdio.h>

void Display(int iNo,int iFrequency)
{
     int iCnt= 0;

    if(iFrequency < 0)  //updator
    {
       iFrequency = -iFrequency;
    }
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d","iNo","iFrequency");
    }
}
int main()
{ 
    int iValue=0;
    int iCount=0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    printf("Enter the Frequecy : ");
    scanf("%d",&iCount);

    

    Display(iValue,iCount);

    return 0;
}
