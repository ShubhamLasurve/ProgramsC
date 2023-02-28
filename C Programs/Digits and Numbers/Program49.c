//Program to Accept number from user and print summation of Digits on screen
//Input :- 751
//Output :- 3

//Input :- 7575
//Output :- 4

//Input :- 10
//Output :- 2

#include<stdio.h>

int SumDigits(int iNo)
{
        int iDigit = 0;
        int iSum = 0;
        
        if(iNo < 0)
        {
                iNo = -iNo;
        }
        while(iNo != 0)
        {
                iDigit = iNo % 10;
                iNo = iNo /10;
                iSum = iSum + iDigit;  
        }

        return iSum;
}

int main()
{
        int iValue = 0;
        int iRet = 0;

        printf("Enter the number\n");
        scanf("%d",&iValue);

        iRet = SumDigits(iValue);

        printf("Addition of digits is : %d\n",iRet);

        return 0;
}