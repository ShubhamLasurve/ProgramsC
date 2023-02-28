//Program to Accept number from user and check whether that number is palindrom or not
//Input :- 121
//Output :-121. The given number is palindrom

//Input :- 762
//Output :- 267,the given number is not palindrom

//Input :- 112
//Output :- 211

#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
        int iDigit = 0;
        int iRev = 0;
        int iTemp = iNo;
       
        while(iNo != 0)
        {
                iDigit = iNo % 10;
                iRev = (iRev * 10) + iDigit;
                iNo = iNo / 10;
        }
        if(iRev == iTemp)
        {
                return true;
        }
        else
        {
                return false;
        }
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