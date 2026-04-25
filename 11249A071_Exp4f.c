#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd;
    char writebuf[] = "Hello World";
    char readbuf[50];

    fd = open("file2.txt", O_CREAT | O_RDWR, 0666);

    if(fd == -1)
    {
        printf("Error opening file\n");
        return 1;
    }

    write(fd, writebuf, sizeof(writebuf));

    lseek(fd, 0, SEEK_SET);

    read(fd, readbuf, sizeof(writebuf));

    printf("Data from file: %s\n", readbuf);

    close(fd);
    return 0;
}