/*
Input : Row = 4  Column = 4
with essential filter

&   &   &   &
*   &   &   &
*   *   &   &
*   *   *   &

*/
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    if(iRow != iCol)
    {
        printf("Row numbers and Column numbers are different\n");
        return;
    }
    for(i = 1; i <= iRow;i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j >= i)
            {
                printf("&\t");
            }
            else
            {
                printf("*\t");
            }
            /*
            if(i <=j)
            {
                print("*\t");
            }
            else
            {
                print("$\t");
            }
            */
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}