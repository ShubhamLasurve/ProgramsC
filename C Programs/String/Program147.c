//Accept string from user and Count number of white spaces

#include<stdio.h>

int CountWhiteSpaces(char *str)
{
        int iCnt = 0;
        while(*str != '\0')
        {
                if(*str == ' ')
                {
                        iCnt++;
                }
                str++;
        }
        return iCnt;
}

int main()
{
        char Arr[20];
        int iRet = 0;

        printf("Please Enter the string\n");
        scanf("%[^'\n']s",Arr);

        iRet = CountWhiteSpaces(Arr);

        printf("Number of white spaces are %d\n",iRet);

        return 0;
}