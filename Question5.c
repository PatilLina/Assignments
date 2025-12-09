
////////////////////////////////////////////////////////////
//
//  File name :     Question5.c
//  Description :   This program returns the product of all
//                  odd elements present in the given array
//  Author :        lina patil
//  Date :          18/11/2025
//
////////////////////////////////////////////////////////////

/*  ALGORITHM

    START
          Accept number of elements as iLength
          Allocate memory dynamically for array Arr
          Accept all array elements from user

          Initialise iMult = 1

          For each element in the array
                If element is odd
                       Multiply iMult with element

          Return iMult

    STOP
*/

////////////////////////////////////////////////////////////
//
//  REQUIRED HEADER FILES
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
//
//  Function Name :  Product
//  Description :    Returns the product of all odd elements
//                   in the array
//  Input :          Integer array, Integer size
//  Output :         Integer 
//  Author :         lina patil
//  Date :           18/11/2025
//
////////////////////////////////////////////////////////////

int Product(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMult = 1;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iMult = iMult * Arr[iCnt];
        }  
    }
    return iMult;
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0;
    int *Arr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements you want in array \n");
    scanf("%d", &iLength);

    Arr = (int*)malloc(iLength * sizeof(int));
    if(NULL == Arr)
    {
        printf("Unable to allocated memory\n");
        return -1;
    }

    printf("Enter the elements you want to in an array\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    iRet = Product(Arr, iLength);
    printf("Product is %d\n", iRet);

    free(Arr);
    return 0;
} // End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 5
//  Array : 1 2 3 4 5
//  Output : Product is 15
//
//  Input : 4
//  Array : 2 4 6 8
//  Output : Product is 1
//
//  Input : 6
//  Array : 11 13 15 2 4 6
//  Output : Product is 2145
//
////////////////////////////////////////////////////////////
