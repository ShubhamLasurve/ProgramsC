// Program to print numbers in reverse order using while loop
#include<stdio.h>

//Input = 5
//Output = 5    4       3       2       1
void DisplayReverse(int iNo)
{
        int iCnt = 0;

        printf("____________________________\n");
        iCnt = iNo;
        while(iCnt > 0)
        {
                printf("%d\t",iCnt);
                iCnt--;
        } 
        printf("\n________________________________\n");
}

int main()
{
        int iValue = 0;

        printf("Enter the number\n");
        scanf("%d",&iValue);

        DisplayReverse(iValue);

        return 0;
}