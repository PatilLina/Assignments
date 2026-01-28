
/////////////////////////////////////////////////////////////////////////////////////
//
//  File name   :   program27_3.c
//  Description :   Accept number of Rows and Number of Columns
//                  from user and Display below pattern 
//
//  Input       :   iRow=3
//                  iCol=5   
//     
//  Output      :   5 4 3 2 1
//                  5 4 3 2 1
//                  5 4 3 2 1 
//  Author      :   Lina Vijay Patil
//  Date        :   21/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////
void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i=1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of Rows :\n");
    scanf("%d", &iValue1);

    printf("Enter the number of Columns :\n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}
