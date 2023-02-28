//Accept N numbers from user and return Minimum Number

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)      //Step 5
{
    int iCnt = 0;
    int iMin = Arr[0];

    for(iCnt = 0;iCnt < iSize; iCnt++)      //Time complexity is N
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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

    iRet = Minimum(ptr,iLength);        //Step 4
    printf("Minimum number is %d\n",iRet);

    free(ptr);      //Step 6

    return 0;
}