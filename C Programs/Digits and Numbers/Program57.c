//Program to Accept number from user and check whether that number is palindrom or not by using for loop
//Input :- 121
//Output :-121. The given number is palindrom

//Input :- 762
//Output :- 267,the given number is not palindrom

#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
        int iDigit = 0;
        int iRev = 0;
        int iTemp = iNo;
       
        for(;iNo != 0;) 
        {
                iDigit = iNo % 10;
                iRev = (iRev * 10) + iDigit;
                iNo = iNo / 10;
        }
        return (iTemp == iRev);
}
int main()
{
        int iValue = 0;
        bool bRet = false;

        printf("Enter the number\n");
        scanf("%d",&iValue);

        bRet = CheckPalindrome(iValue);
        if(bRet == true)
        {
                printf("%d is palindrome number\n",iValue);
        }
        else
        {
                printf("%d is not palindrome number\n",iValue);
        }

        return 0;
}