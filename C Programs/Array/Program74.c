//Accept n numbers and take a number and check whether that number is present in array or not
//Same but reduced complixity
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


//Step 5: Perform the operation
bool CheckOccurance(int Arr[],int iSize,int iNo)
{
        
        int iCnt = 0; 
       
       

        // siranch logic
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
               if(Arr[iCnt] == iNo)
               {
                  break;
               }
        }
        if(iCnt == iSize)
        {
                return false;
        }
        else
        {
                return true;
        }
}



int main()
{
        int *ptr = NULL;
        int iLength = 0;
        int i = 0;
        int iValue = 0;
        bool bRet = false;

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

        printf("Enter the number to find whether it it present or not \n");
        scanf("%d",&iValue);

        //Step 4 : Call the function
        bRet =CheckOccurance(ptr,iLength,iValue);

        if(bRet == true)
        {
                printf("%d is Occured in array\n",iValue);
        }
        else
        {
                printf("%d is not Occured\n",iValue);
        }

        //Step 6 : Deallocate the memory
        free(ptr);

        return 0;
}

