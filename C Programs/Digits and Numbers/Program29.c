#include<stdio.h>

int Summation(int iNo)
{
        int iSum = 0;    
        int iCnt = 0;

        for(iCnt = 1;iCnt <=iNo ;iCnt++)
        {
                iSum = iSum + iCnt;
        }

        return iSum;

}

int main()
{
        int iRet = 0;
        int iValue = 0;

        printf("Enter thevalue\n");
        scanf("%d",&iValue);    


        iRet = Summation(iValue);

        printf("Sum is : %d\n",iRet);

        return 0;
}