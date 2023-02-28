//Program to Accept number from user and return its reverse number
//Input :- 751
//Output :- 157

//Input :- 762
//Output :- 267

//Input :- 112
//Output :- 211

#include<stdio.h>

int Reverse(int iNo)
{
        int iDigit = 0;
        int iRev = 0;

        if(iNo < 0)
        {
                iNo = -iNo;
        }

        while(iNo != 0)
        {
                iDigit = iNo % 10;
                iRev = (iRev * 10) + iDigit;
                iNo = iNo / 10;
        }
        return iRev;
}
int main()
{
        int iValue = 0;
        int iRet = 0;

        printf("Enter the number\n");
        scanf("%d",&iValue);

        iRet = Reverse(iValue);
        printf("Reverse number is %d\n",iRet);

        return 0;
}