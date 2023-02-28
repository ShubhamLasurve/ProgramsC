// Program to print numbers in reverse order using for loop
#include<stdio.h>

//Input = 5
//Output = 5    4       3       2       1
void DisplayReverse(int iNo)
{
        int iCnt = 0;

        printf("____________________________\n");
        for(iCnt = iNo;iCnt > 0; iCnt--)
        {
                printf("%d\t",iCnt);
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