/*
Recursive
    output:-

    *   *   *   *

*/
#include<stdio.h>

void DisplayR()
{
    static int iCnt = 1;

    if(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
        DisplayR();     //Recursive call
    }
}

int main()
{
    printf("Inside Main\n");

    DisplayR();

    printf("End Of Main\n");
    
    return 0;
}