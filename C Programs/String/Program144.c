//Accept string from user and Convert Capital letters to small letters 

#include<stdio.h>

void strLwrX(char *str)
{
        while(*str != '\0')
        {
                if((*str >= 'A') && (*str <= 'Z'))
                {
                        *str = *str + 32;
                }
                str++;
        }
}

int main()
{
        char Arr[20];

        printf("Please Enter the string\n");
        scanf("%[^'\n']s",Arr);

        strLwrX(Arr);

        printf("Strinf after conversion is %s\n",Arr);

        return 0;
}