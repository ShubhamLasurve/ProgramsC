//Count Digit and add
#include<stdio.h>

int SumDigitsR(int No)
{
    int Digit = 0;
    static int Sum = 0;

    if(No != 0)
    {
        Digit = No % 10;
        Sum = Sum + Digit;
        No = No / 10;
        SumDigitsR(No);
    }
    return Sum;
}

/*
int CountDigits(int No)
{
    int iCnt = 0;

    while(No != 0)
    {
        iCnt++;
        No = No / 10;
    }
    return iCnt;
}
*/

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&Value);

    iRet = SumDigitsR(Value);
    printf("Sum of Digits are %d\n",iRet);
    return 0;
}