//Accept string from user and Convert small letters to Capital letters and vice versa 

#include<stdio.h>

void strToggleX(char *str)
{
        while(*str != '\0')
        {
                if((*str >= 'A') && (*str <= 'Z'))
                {
                        *str = *str + 32;
                }
                else if((*str >= 'a') && (*str <= 'z'))
                {
                        *str = *str - 32;
                }
                str++;
        }
}

int main()
{
        char Arr[20];

        printf("Please Enter the string\n");
        scanf("%[^'\n']s",Arr);

        strToggleX(Arr);

        printf("Strinf after conversion is %s\n",Arr);

        return 0;
}