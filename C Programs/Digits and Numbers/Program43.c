//Program to print only even factors of number usong short hand operator(Another approach)(it will reduce time complexity by 75%)
#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
        int iCnt = 0;
        for(iCnt= 2;iCnt <=(iNo/2);iCnt+=2)
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