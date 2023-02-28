/*
Factorial
Recursive
Input : 4
    output:- 4 * 3 * 2 * 1 = 24
*/
#include<stdio.h>

int FactorialR(int No)
{
    static int Sum = 1;
    static int iCnt = 1;

    if(iCnt <= No)
    {
        Sum = Sum * iCnt;
        iCnt++;
        FactorialR(No);
    }
    return Sum;
}

int main()
{
    int value = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&value);
    
    iRet =FactorialR(value);
    printf("Factorial is  %d\n",iRet);

    return 0;
}