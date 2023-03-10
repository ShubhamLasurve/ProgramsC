//Pattern printing : Square pattern 
//Row : 4
//columns:4
/*
    *   *   *   *
    *   *   *   *
    *   *   *   *
    *   *   *   *
*/
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    if(iRow < 0)
    {
        iRow = -iRow;
    }

    if(iCol < 0)
    {
        iCol = -iCol;
    }

    for(i = 1;i <= iRow;i++)        //Outer loop
    {
        for(j = 1; j <=iCol; j++)       //Inner loop
        {
            printf("*\t");
        }
        printf("\n");
    }
}    

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}
