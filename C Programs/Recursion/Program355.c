//Count Digit
#include<stdio.h>

int CountDigitsR(int No)
{
    static int iCnt = 0;

    if(No != 0)
    {
        iCnt++;
        No = No / 10;
        CountDigitsR(No);
    }
    return iCnt;
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

    iRet = CountDigitsR(Value);
    printf("Count of Digits are %d\n",iRet);
    return 0;
}