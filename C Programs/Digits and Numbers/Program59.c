//Program to Accept number from user and return largets digit from that number
//Input :- 121
//Output :-2

//Input :- 762
//Output :- 7

//Input :- 158
//Output :- 8

#include<stdio.h>

int MaxDigit(int iNo)
{
        int iDigit = 0;
        int iMax = 0;

        if(iNo < 0)
        {
                iNo = -iNo;
        }

        while(iNo != 0)
        {
                iDigit = iNo % 10;
                if(iDigit > iMax)
                {
                        iMax = iDigit;
                }
                iNo = iNo / 10;
        }
        return iMax;
}

int main()
{
        int iValue = 0;
        int iRet = 0;

        printf("Enter the number\n");
        scanf("%d",&iValue);

        iRet = MaxDigit(iValue);

        printf("Largest digit is : %d\n",iRet);
        return 0;
}