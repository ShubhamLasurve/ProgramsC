//Accept Character from user and Convert Capital letter to small letter and vice versa
#include<stdio.h>

char ToLowerX(char ch)
{
        if((ch >= 'A') && (ch <= 'Z'))
        {
                return ch + 32;
        }
        else
        {
                return ch;
        }
}

int main()
{
        char cValue = '\0';
        char cRet = '\0';

        printf("Enter the character\n");
        scanf("%c",&cValue);

        cRet = ToLowerX(cValue);

        printf("Character in the upper case is :%c\n",cRet);

        return 0;
}