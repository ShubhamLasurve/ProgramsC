//Accept string and display Letters of that string
/*
Input : Hello
Output:
o
l
l
e

*/

#include<stdio.h>

void Display(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
       str++;
       Display(str);
       printf("%c\n",*str);
    }
}


int main()
{
    char Arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}