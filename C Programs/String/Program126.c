//Program to Accept full name and display on the screen
#include<stdio.h>
#include<stdbool.h>


int main()
{
    char Arr[60];

    printf("Please enter your full name\n");
    //scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);

    printf("Your Name is : %s\n",Arr);

    return 0;
}