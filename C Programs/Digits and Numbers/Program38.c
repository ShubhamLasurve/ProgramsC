//program to print table of given number
#include<stdio.h>

/*
input = 5
output = 5      10      15      20      25      30      35      40      45      50
5 * 1
5 * 2
5 * 3
5 * 4
5 * 5
5 * 6
5 * 7
5 * 8
5 * 9
5 * 10
*/
void DisplayTable(int iNo)
{
        int iCnt = 0;
        printf("__________________________\n");
        printf("Table of %d is :\n",iNo);
        printf("__________________________\n");
        for(iCnt = 1;iCnt <=10;iCnt++)
        {
                printf("Table is %d\n",iNo * iCnt);
        }    
}

int main()
{
        int iValue = 0;
        int iRet = 0;

        printf("Enter the number\n");
        scanf("%d",&iValue);

        DisplayTable(iValue);

        return 0;
}