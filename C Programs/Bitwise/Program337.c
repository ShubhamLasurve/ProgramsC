//Accept number from user and toggle the 4th bit of the number
#include<stdio.h>
#include<stdbool.h>

//4th bit toggle
typedef unsigned int UINT;

//0000  0000    0000    0000    0000    0000    0000    0000

//0000  0000    0000    0000    0000    0000    0000    1000

//  0     0       0        0       0      0     0         8

//0X00000008 Hexadecimal

UINT ToggleBit(UINT No)
{
       UINT iMask =  0X00000008;
       UINT iAns = 0;

       iAns = No ^ iMask;
       return iAns;
}

int main()
{
        UINT Value = 0;
        UINT iRet = 0;

        printf("Enter number\n");
        scanf("%d",&Value);

        iRet = ToggleBit(Value);

        printf("Updated number is : %d\n",iRet);
        
        return 0;
}