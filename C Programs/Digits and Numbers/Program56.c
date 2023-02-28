//Program to Accept number from user and return its reverse number
//Input :- 751
//Output :- 157

//Input :- 762
//Output :- 267

//Input :- 112
//Output :- 211

#include<stdio.h>
#include<stdbool.h>

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
bool CheckPallindrome(int iData)
{
        int iReverse = 0;
        iReverse = Reverse(iData);
        return(iReverse == iData);
}
int main()
{
        
        int iValue = 0;
        bool bRet = false;

        printf("Enter the number\n");
        scanf("%d",&iValue);

        bRet = CheckPallindrome(iValue);
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