#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd;

    fd = open("file1.dat", O_CREAT | O_RDWR, 0666);

    if(fd == -1)
    {
        printf("Error opening file\n");
        return 1;
    }

    printf("File opened successfully\n");

    close(fd);
    return 0;
}


