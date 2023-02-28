//Program to Accept number from user and print no Even and Odd Digits on screen
//Input :- 751
//Output :- 0

//Input :- 762
//Output :- 2

//Input :- 112
//Output :- 1

#include<stdio.h>

void DisplayEvenOddDigits(int iNo)
{
        int iDigit = 0;
        int iEvenCnt = 0;
        int iOddCnt = 0;
        if(iNo == 0)                    //Filter
        {
                printf("Number of even digits are 1\n");
                printf("Number of odd digits are 0\n");
                return;
        }
        
        while(iNo != 0)
        {
                iDigit = iNo % 10;
                if((iDigit % 2) == 0)
                {
                        iEvenCnt++;
                }
                else
                {
                        iOddCnt++;
                }
                iNo = iNo /10;
        }
       printf("Number of even digits are : %d\n",iEvenCnt);
       printf("Number of odd digits are : %d\n",iOddCnt);
}

int main()
{
        int iValue = 0;

        printf("Enter the number\n");
        scanf("%d",&iValue);

        DisplayEvenOddDigits(iValue);

        return 0;
}