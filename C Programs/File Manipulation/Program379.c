//File Manipulation : take the data from user ,opening the file and Write the data in the file
//This will not Overwrite the data 
//It will add the data
//FD stands for File Descriptor

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>              //File Control.h
#include<string.h>

int main()
{
        char Fname[20];
        int fd = 0,Length = 0;
        char Data[100];

        printf("Enter the file name that you want to open\n");
        scanf("%s",Fname);

        fd = open(Fname,O_RDWR | O_APPEND);

        if(fd == -1)
        {
                return -1;
        }
        
        printf("Enter the data that you want to write in the file\n");
        scanf(" %[^'\n]s",Data);

        Length = strlen(Data);

        //write(kashat, kay, kiti);
        write(fd,Data,Length);

        return 0;
}