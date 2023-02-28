//Accept string and display Letters of that string in given pattern 
/*
Head recursion
Input: Hello
Output: 
Hello
ello
llo
lo
o
*/

#include<stdio.h>


void Display(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
       printf("%s\n",str);
       str++;
       Display(str);
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