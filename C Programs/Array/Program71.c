//Accept n numbers and perform summation of even elements and odd elements

#include<stdio.h>
#include<stdlib.h>

//Step 5: Perform the operation
void AddEvenOdd(int Arr[],int iSize)
{
        int iCnt = 0; 
        int iEvenSum = 0;
        int iOddSum = 0;

        for(iCnt = 0;iCnt < iSize;iCnt++)
        {
                if((Arr[iCnt] % 2) == 0)
                {
                       iEvenSum = iEvenSum +  Arr[iCnt];   
                }
        
                else
                {
                        iOddSum = iOddSum + Arr[iCnt];
                }      
        }
         printf("Summation of Even elements is : %d\n",iEvenSum);
         printf("Summation of Odd elements is : %d\n",iOddSum);
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
        AddEvenOdd(ptr,iLength);

        //Step 6 : Deallocate the memory
        free(ptr);

        return 0;
}