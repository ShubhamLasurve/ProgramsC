//Dynamic Mask
//Accept number and position of bit from user and check whether the bit of that position is on or off

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT Pos)
{
        UINT iMask = 0X00000001;                //UINT iMask = 1;
        UINT Result = 0;

        if((Pos < 1) || (Pos > 32))
        {
                printf("Invalid position, It should be in between 1 to 32\n");
                return false;
        }

        iMask = iMask << (Pos - 1);             //Dynamic MAsk formation

        Result = No & iMask;

        if(iMask == Result)
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
        UINT Position = 0;
        bool bRet = false;

        printf("Enter number\n");
        scanf("%d",&Value);

        printf("Enter the position of bit\n");
        scanf("%d",&Position);

        bRet = CheckBit(Value,Position);

        if(bRet == true)
        {
                printf("Bit at the position %d is on \n",Position);
        }       
        else
        {
                printf("Bit at the position %d is off \n",Position);
        } 

        return 0;
}