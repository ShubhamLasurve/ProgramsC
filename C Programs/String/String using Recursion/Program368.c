//Display Arry and Display Addition of all the elements
#include<stdio.h>

int AdditionR(int Arr[], int iSize)
{
    static int iCnt = 0;
    static int iSum = 0;

    if(iCnt < iSize)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;
        AdditionR(Arr,iSize);
    }
    return iSum;
}

int main()
{
    int Brr[5] = {10,20,30,40,50};
    int iRet= 0;

    iRet = AdditionR(Brr,5);
    printf("Addition is %d\n",iRet);

    return 0;
}