//Program to print onlyodd factors of number (Another approach)(it will reduce time complexity by 75%)
#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
        int iCnt = 0;
        for(iCnt= 1;iCnt <=(iNo/2);iCnt= iCnt + 2)
        {
                if(iNo % iCnt == 0)
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

        DisplayEvenFactors(iValue);
        return 0;
}