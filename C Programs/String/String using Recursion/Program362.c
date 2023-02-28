//Accept string and display Letters of that string in given pattern 
/*
Tail Recursion
Input: Hello
Output: 
o
lo
llo
ello
*/

#include<stdio.h>

void Display(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
       Display(++str);
       printf("%s\n",str);
       
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