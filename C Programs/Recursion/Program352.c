/*
Display Factors
Recursive
Input : 24
    output:- 1  2   3   4   6       8   12
*/
#include<stdio.h>
/*
void FactorsI(int No)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= (No/2); iCnt++)
    {
        if(No % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
*/

void FactorsR(int No)
{
    static int iCnt = 1;

    if(iCnt <= (No/2))
    {
        if(No % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
        FactorsR(No);
    }
}

int main()
{
    int value = 0;
    
    printf("Enter number\n");
    scanf("%d",&value);
    
    FactorsR(value);
    
    return 0;
}