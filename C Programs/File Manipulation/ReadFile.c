#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd = 0;                 //File Descreptor
    char Data[20];
    
    printf("Please enter the file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);    // O_RDONLY or O_WRONLY OR O_RDWR

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File is successfully opened with FD %d\n",fd);
    }

    read(fd,Data,10);
    printf("Data from file is : %s\n",Data);

    close(fd);
    printf("File is successfully closed\n");

    return 0;
}