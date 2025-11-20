
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Question_5.c
//  Description     : Accept one character from user and Display if its Vowel or Display if it is not a Vowel
//  Author          : Lina vijay patil
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

#define True 1
#define False 0

bool CheckVowel(char cValue)
{
    if ( cValue == 'a' || cValue == 'A'||
         cValue == 'e' || cValue == 'E'|| 
         cValue == 'i' || cValue == 'I'||
         cValue == 'o' || cValue == 'O'||
         cValue == 'u' || cValue == 'U'
        )  

       {
        return 1;
       } 
    else
    {
        return 0;
    }   
}
int main()
{
    char cValue = '\0';
    bool bRet   ='\0';

    printf("Enter Your Character\n");
    scanf("%c", &cValue);

    bRet = CheckVowel(cValue);

    if (bRet == True)
    {
        printf("It is a Vowel");

    }
    else
    {
       printf("It is not  a Vowel");
    }
    
    return 0;

}
