/////////////////////////////////////////////////////////////////////
//Steps to follow ehile programming
//////////////////////////////////////////////////////////////////

//1     Understand the problem statement
//2     Write the algorithm
//3     Decide the programming language
//4     write the program
//5     test the program

///////////////////////////////////////////////////////////////////////
//Problem statement: Accept number from user and check whether it is divisible by 5 or not
//Input : 23
//Output : 23 is not divisible by 5
//
//Input : 25
//Output: 25 is divisible by 5
//
//Input : -20
//Output : -20 is dividible by 5
//
////////////////////////////////////////////////////////////////////////
//Algorithm:-
//////////////////////////////////////////////////////////////////////
/*
        START
                Accept number from user as iNo
                Divide that iNo by 5 and check the value of reminder
                If the value is 0 
                   then display as iNo is divisible by 5
                Else 
                   display as iNo is not divisible by 5
        END
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
//  Function name: DivisibleByFive
//  Description:  to check whether input is divisiblreby 5 or not
//  Input:  Integer
//  Output:  Integer
//  Author:  Shubham Vilas Lasurve
//  Date:  12/10/2022
//
//////////////////////////////////////////////////////////////////////
int DivisibleByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;

    if(iAns != 0)
    {      
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()              //entry point function
{
        int iValue = 0;
        int iRet = 0;

        printf("Enter the number :\n");
        scanf("%d",&iValue);
        
        iRet = DivisibleByFive(iValue);
        if(iRet != 0)
        {
                printf("%d is not divisible by 5\n",iValue);
        }
        else
        {
                 printf("%d is divisible by 5\n",iValue);
        }

        return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//
///////////////////////////////////////////////////////////////////////////