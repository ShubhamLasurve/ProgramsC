#include<stdio.h>
#include<stdbool.h>

bool DivisibleByThreeAndfive(int iNo)
{
        if(iNo % 3 == 0)
        {
                if(iNo % 5 == 0)
                {
                      return true;
                } 
                else
                {
                        return false;
                }                        
        }
        else
        {
                return false;
        }
}
int main()
{
        int iValue = 0;
        bool bRet = false;

        printf("Emnter number : \n");
        scanf("%d",&iValue);

        bRet = DivisibleByThreeAndfive(iValue);
        if(bRet == true)
        {
                printf("Number is divisible by 3 and 5\n");
        }
        else
        {
                printf("Number is not divisible by 3 and 5 \n");
        }
        return 0;
}