//Accept N numbers from user and return Maximum Number

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)      //Step 5
{
    int iCnt = 0;
    int iMax = Arr[0];

    for(iCnt = 0;iCnt < iSize; iCnt++)      //Time complexity is N
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;
    int iRet = 0;

    printf("Enter number of elements\n");     //Step 1
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));     //Step 2

    printf("enter the elements\n");     //Step 3
    for(i = 0;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Maximum(ptr,iLength);        //Step 4
    printf("MAximum number is %d\n",iRet);

    free(ptr);      //Step 6

    return 0;
}