//Accept string from user and Convert small letters to Capital letters 

#include<stdio.h>

void strUprX(char *str)
{
        while(*str != '\0')
        {
                if((*str >= 'a') && (*str <= 'z'))
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

        strUprX(Arr);

        printf("Strinf after conversion is %s\n",Arr);

        return 0;
}