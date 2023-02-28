//Accept n numbers and Accept a number and return the index of that number occured and if number isn't found then return -1

#include<stdio.h>
#include<stdlib.h>

//Step 5: Perform the operation
int CheckOccurance(int Arr[],int iSize,int iNo)
{
        
        int iCnt = 0; 
   
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
               if(Arr[iCnt] == iNo)
               {
                  break;
               }
        }

        if(iCnt == iSize)
        {
                return -1;
        }
        else
        {
                return iCnt;
        }
}



int main()
{
        int *ptr = NULL;
        int iLength = 0;
        int i = 0;
        int iValue = 0;
        int iRet = 0;

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

        printf("Enter the number to findout the index of first coourance \n");
        scanf("%d",&iValue);

        //Step 4 : Call the function
        iRet = CheckOccurance(ptr,iLength,iValue);

        if(iRet == -1)
        {
                printf("there is no %d is Occured in array\n",iValue);
        }
        else
        {
                printf("%d is not Occured in array at index %d\n",iValue,iRet);
        }

        //Step 6 : Deallocate the memory
        free(ptr);

        return 0;
}

