//Program to Accept number from user and print no of Digits on screen
//Input :- 751
//Output :- 3

//Input :- 7575
//Output :- 4

//Input :- 10
//Output :- 2

#include<stdio.h>

int CountDigits(int iNo)
{  
        int iCnt = 0;

        if(iNo == 0)                    //Filter
        {
                return 1;
        }

        if(iNo < 0)                     //Updator
        {
                iNo = -iNo;
        }
        while(iNo > 0)
        {
                iNo = iNo /10;
                iCnt++;
        }
        return iCnt;
}

int main()
{
        int iValue = 0;
        int iRet = 0;

        printf("Enter the number\n");
        scanf("%d",&iValue);

        iRet = CountDigits(iValue);

        printf("Number of digits are : %d\n",iRet);

        return 0;
}