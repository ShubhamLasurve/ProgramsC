//File Manipulation : opening the file and Write the data in the file
//FD stands for File Descriptor

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>              //File Control.h

int main()
{
        char Fname[20];
        int fd = 0;
        char Data[] = "Marvellous";

        printf("Enter the file name that you want to open\n");
        scanf("%s",Fname);

        fd = open(Fname,O_RDWR);

        if(fd == -1)
        {
                printf("Unable to open file\n");
        }
        else
        {
                printf("File is successfully opened with FD %d\n",fd);
                write(fd,Data,10);
        }

        return 0;
}