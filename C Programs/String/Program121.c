#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;
    
    printf("Please enter one character\n");
    scanf("%c",&cValue);

    bRet = CheckSmall(cValue);
    if(bRet == true)
    {
        printf("%c is Capital case letter\n",cValue);
    }
    else
    {
        printf("%c is not a Capital case letter\n");
    }

    return 0;
}