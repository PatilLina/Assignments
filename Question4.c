
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Question_4.c
//  Description     : Accept one character from user and convert its case
//  Author          : Lina vijay patil
//  Date            : 21/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void DisplayConvert(char cValue)
{
    if (cValue >= 'A' && cValue <= 'Z')
    {
       cValue = cValue + 32 ;
       printf("%c",cValue);
    }
    
    else if(cValue >= 'a' && cValue <= 'z')
    {
        cValue = cValue - 32;
        printf("%c",cValue);
    }
}
int main()
{
    char cValue = '\0'  ;
    
    printf("Enter your Character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);


return 0;

}
