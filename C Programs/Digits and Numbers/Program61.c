//Program to Accept number from user and return smallest digit from that number
//Input :- 121
//Output :-2

//Input :- 762
//Output :- 7

//Input :- 158
//Output :- 8

#include<stdio.h>

int MinDigit(int iNo)
{
        int iDigit = 0;
        int iMin = 9;

        if(iNo < 0)
        {
                iNo = -iNo;
        }

        while(iNo != 0)
        {
                iDigit = iNo % 10;
                if(iDigit < iMin)
                {
                        iMin = iDigit;
                }
                iNo = iNo / 10;
        }
        return iMin;
}

int main()
{
        int iValue = 0;
        int iRet = 0;

        printf("Enter the number\n");
        scanf("%d",&iValue);

        iRet = MinDigit(iValue);

        printf("Smallest digit is : %d\n",iRet);
        return 0;
}