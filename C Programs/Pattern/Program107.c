/*
Input : Row = 4  Column = 4
with essential filter

#   1   1   1
2   #   1   1
3   3   #   1
4   4   4   #



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
            if(i < j)
            {
                printf("%d\t",i);
            }
            else if(i == j)
            {
                printf("#\t");
            }
            else
            {
                printf("%d\t",i);
            }
           /*
           siranch logic
           if(i == j)
            {
                printf("#\t");
            }
            else
            {
                printf("%d\t",i);
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