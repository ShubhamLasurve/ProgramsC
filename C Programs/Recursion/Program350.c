/*
Recursive
Input : 4
    output:- 4+3+2+1 = 10
*/
#include<stdio.h>

int AdditionR(int No)
{
    static int Sum = 0;
    static int iCnt = 0;

    if(iCnt <= No)
    {
        Sum = Sum + iCnt;
        iCnt++;
        AdditionR(No);
    }
    return Sum;
}

int main()
{
    int value = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&value);
    
    iRet = AdditionR(value);
    printf("Addition is  %d\n",iRet);

    return 0;
}