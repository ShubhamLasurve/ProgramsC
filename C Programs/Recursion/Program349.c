/*
Recursive
Input : 4
    output:-

    *   *   *   *

*/
#include<stdio.h>

void DisplayR(int No)
{
    static int iCnt = 1;

    if(iCnt <= No)
    {
        printf("*\t");
        iCnt++;
        DisplayR(No);     //Recursive call
    }
}

int main()
{
    int value = 0;

    printf("Enter number\n");
    scanf("%d",&value);

    DisplayR(value);

    printf("End Of Main\n");
    
    return 0;
}