//Accept number from user and check whether the 7th , 8th and 9th bits of that number is on or off
#include<stdio.h>
#include<stdbool.h>

//7th 8th and 9th bits
typedef unsigned int UINT;

// 0000         0000      0000          0000    0000    0001    1100    0000
//   0            0         0             0       0        1       12       0
//000001C0
//0X000001C0 : HexaDecimal
bool CheckBit(UINT No)
{
        UINT iMask = 0X000001C0;
        UINT Result = 0;

        Result = No & iMask;

        if(Result == iMask)
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
        UINT Value = 0;
        bool bRet = false;

        printf("Enter number\n");
        scanf("%d",&Value);

        bRet = CheckBit(Value);
        if(bRet == true)
        {
                printf("12th bit is on\n");
        }
        else
        {
                printf("12th bit is off\n");
        }
       
        return 0;
}