//Program to print Non factors of given number
#include<stdio.h>

void DisplayNonFactors(int iNo)
{
        int iCnt = 0;
        printf("Non factors of %d are :",iNo);
        for(iCnt = 1;iCnt < iNo; iCnt++)
        {
                if((iNo % iCnt) != 0)
                {
                        printf("%d\n",iCnt);
                }
        }
}
int main()
{
        int iValue = 0;

        printf("Enter the number\n");
        scanf("%d",&iValue);

        DisplayNonFactors(iValue);

        return 0;
}