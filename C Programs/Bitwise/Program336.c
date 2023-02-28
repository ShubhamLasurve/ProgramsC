//Accept number from user and if on then off the 4th bit of the number
#include<stdio.h>
#include<stdbool.h>

//4th bit off kara
typedef unsigned int UINT;

//0000  0000    0000    0000    0000    0000    0000    1000
//1111  1111    1111    1111    1111    1111    1111    0111            Mask(number chya ulte bits)
//  F     F       F       F       F       F       F       7
// 0XFFFFFFF7: HexaDecimal
UINT OffBit(UINT No)
{
       UINT iMask =  0XFFFFFFF7;
       return (No & iMask);
}

int main()
{
        UINT Value = 0;
        UINT iRet = 0;

        printf("Enter number\n");
        scanf("%d",&Value);

        iRet = OffBit(Value);

        printf("Updated number is : %d\n",iRet);
        
        return 0;
}