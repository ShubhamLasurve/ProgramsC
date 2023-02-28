//File Manipulation : Accept file name from user and count the small case leters in the data
//FD stands for File Descriptor

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>              //File Control.h
#include<string.h>

int main()
{
        char Fname[20];
        int fd = 0,Length = 0;
        int Count = 0, i = 0;
        char Data[100];

        printf("Enter the file name that you want to open\n");
        scanf("%s",Fname);

        fd = open(Fname, O_RDONLY);

        if(fd == -1)
        {
                printf("Unable to open the file \n");
                return -1;
        }

        while((Length = read(fd,Data,sizeof(Data))) != 0)
        {
                for(i = 0; i < Length; i++)
                {
                        
                }
        }

        printf("Size of File is %d bytes\n ",Size);

        close(fd);

        return 0;
}

//0     Standard Input Device           Keyboard
//1     standard Output Device          Console
//2     Standard Error Device           Console