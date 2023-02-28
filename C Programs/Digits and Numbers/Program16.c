//Demonstration of iteration
//Functional Approach 
/*Return_Datatype Function_Name(Parameter_List)
{
        Function Body  ->Sequence/selection /Iteration/Combination of all
}
*/

/*
1. Write the common statement in loop block
2.Check whether the number of iterations are already known or not
3. If the iterations count is fixed then go for for loop
4. if  the iterations count is not fixed then go for while loop
*/
#include<stdio.h>

void Display()
{
       int iCnt = 0;
       //       1       2       3
       for(iCnt = 1; iCnt <= 5; iCnt++)
       {
        //                 4
                printf("Jay GAnesh..\n");
       }
}

int main()
{
        Display();

        return 0;
}