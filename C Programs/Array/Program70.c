//Accept n numbers and Display even and odd numbers of elements

#include<stdio.h>
#include<stdlib.h>

//Step 5: Perform the operation
void DisplayEvenOdd(int Arr[],int iSize)
{
        int iCnt = 0; 
        int iEvenCnt = 0;
        int iOddCnt = 0;

        for(iCnt = 0;iCnt < iSize;iCnt++)
        {
                if((Arr[iCnt] % 2) == 0)
                {
                        iEvenCnt++;     
                }

        }
         printf("Even count is : %d\n",iEvenCnt);
         printf("Odd count is : %d\n",iSize - iEvenCnt);
}

int main()
{
        int *ptr = NULL;
        int iLength = 0;
        int i = 0;

        //Step 1 : Accept size of array
        printf("Enter number of elements :\n");
        scanf("%d",&iLength);

        //Step 2: Allocate the memory of array
        ptr = (int *)malloc(iLength * sizeof(int));

        //Step 3: Accept the elements of array
        printf("Enter the elements :\n");

        for(i = 0; i < iLength; i++)
        {
                scanf("%d",&ptr[i]);
        }

        //Step 4 : Call the function
        DisplayEvenOdd(ptr,iLength);

        //Step 6 : Deallocate the memory
        free(ptr);

        return 0;
}