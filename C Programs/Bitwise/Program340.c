//Dynamic Mask
//Accept number and  2 positions of bit from user and check whether the bit of that position is on or off
//Explanation at bottom
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT Pos1, UINT Pos2)
{
        UINT iMask1 = 0X00000001;                //UINT iMask1 = 1;
        UINT iMask2 = 0X00000001;                //UINT iMask2 = 1;
        UINT iMask = 0;

        UINT Result = 0;

        if((Pos1 < 1) || (Pos1 > 32) || (Pos2 < 1) || (Pos2 > 32))
        {
                printf("Invalid position, It should be in between 1 to 32\n");
                return false;
        }

        iMask1 = iMask1 << (Pos1 - 1);             //Dynamic MAsk formation
        iMask2 = iMask2 << (Pos2 - 1);

        iMask = iMask1 | iMask2;                //Clubing of two masks 

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
        UINT Position1 = 0;
        UINT Position2 = 0;
        bool bRet = false;

        printf("Enter number\n");
        scanf("%d",&Value);

        printf("Enter the first position of bit\n");
        scanf("%d",&Position1);

        printf("Enter the second position of bit\n");
        scanf("%d",&Position2);

        bRet = CheckBit(Value,Position1, Position2);

        if(bRet == true)
        {
                printf("Bit at the position %d & %d is on \n",Position1, Position2);
        }       
        else
        {
                printf("Bit at the position %d & %d is off \n",Position1, Position2);
        } 

        return 0;
}


/*
Pos1 = 3
 Pos2 = 6

 Mask1 = 0      0       0       0       0       0       0       1
 Mask2 = 0      0       0       0       0       0       0       1

 Mask1 = Mask1 << (pos1 - 1)
 Mask1 = Mask1 << (2)
 Mask1 = 0      0       0       0       0       1       0       0

  Mask2 = Mask2 << (pos2 - 1)
 Mask2 = Mask2 << (2)
 Mask1 = 0      0       1       0       0       0       0       0

 Mask = Mask1 | Mask2
                 0      0       0       0       0       1       0       0

        |        0      0       1       0       0       0       0       0
                 
        ---------------------------------------------------------------------------------

                0       0       1       0       0       1       0       0
*/