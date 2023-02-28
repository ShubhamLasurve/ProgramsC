//File Manipulation : take the data from user read the data from the file and display it and then close the file
//FD stands for File Descriptor
//This is solution for previous program

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
        Length = read(fd,Data,13);

        printf("Data from file is \n");
        write(1,Data,Length);

        close(fd);

        return 0;
}

//0     Standard Input Device           Keyboard
//1     standard Output Device          Console
//2     Standard Error Device           Console