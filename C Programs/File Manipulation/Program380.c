//File Manipulation : take the data from user read the data from the file and display it 
//FD stands for File Descriptor
//The output will contain some garbage

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

        fd = open(Fname,O_RDWR);

        if(fd == -1)
        {
                return -1;
        }
        
        //read(Kuthun vachaych, kashat vachaych , kiti vachaych);
        read(fd,Data,13);

        printf("Data from file is : %s",Data);

        return 0;
}