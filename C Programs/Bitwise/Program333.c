//Accept number from user and check whether the 10th bit of that number is on or off
#include<stdio.h>
#include<stdbool.h>

//10th bit
typedef unsigned int UINT;

//
// 0000         0000      0000          0000    0000    0010    0000    0000   this are 32 bits
//   0            0         0             0       0        2       0       0    this is value
//00000200              this is combined value of above line
//0X00000200 : HexaDecimal
bool CheckBit(UINT No)
{
        UINT iMask = 0X00000200;
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
                printf("10th bit is on\n");
        }
        else
        {
                printf("10th bit is off\n");
        }
       
        return 0;
}