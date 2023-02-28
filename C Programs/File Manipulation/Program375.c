//File Manipulation : opening the file
//FD stands for File Descriptor

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>              //File Control.h

//O_RDONLY      Open for Reading
//O_WRONLY      Open For writing
//O_RDWR        Open For Reading and Writing
int main()
{
        char Fname[20];
        int fd = 0;

        printf("Enter the file name that you want to open\n");
        scanf("%s",Fname);

        fd = open(Fname,O_RDWR);                //Read and Write 

        if(fd == -1)
        {
                printf("Unable to open file\n");
        }
        else
        {
                printf("File is successfully opened with FD %d\n",fd);
        }

        return 0;
}