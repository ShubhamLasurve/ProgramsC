//Accept N numbers from user,Accept one number from user and check last occurance of that number
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckLastOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt =0;
    int iPos = -1;
    //      1           2           3
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)    // 4
        {
            iPos = iCnt;
        }
    }
        return iPos;
    
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iValue = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element to findout the index of last occurance : \n");
    scanf("%d",&iValue);

    iRet = CheckLastOccurance(ptr, iLength, iValue);
    if(iRet == -1)
    {
        printf("There is no %d in the array\n",iValue);
    }
    else
    {
         printf("%d is occured in the array at last index %d\n",iValue,iRet);
    }

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}