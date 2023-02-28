//Create 1 file...Accept 2 files from user and copy the data from exist file to new file
//Using Command line Arguments(Means input will be taken on Command Prompt)

#include<stdio.h>

//argc = arguments cha count
//argv = argments cha vector(array)

int main(int argc, char *argv[])
{

    printf("Number of arguments are : %d\n",argc);

    printf("Name of executable is : %s\n",argv[0]);

    return 0;
}

/*
How to run:-

//argv[0]    argv[1]                argv[2]
    Myexe   Marvellous.txt      Shubham.txt
*/