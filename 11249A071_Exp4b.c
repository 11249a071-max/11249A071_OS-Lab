#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

int main()
{
    int pid, status;

    pid = fork();

    if(pid == -1)
    {
        perror("Error");
        return 1;
    }

    if(pid == 0)
    {
        printf("Child Process\n");
        exit(0);
    }
    else
    {
        printf("Parent Process\n");
        wait(&status);
        printf("Child Completed\n");
    }

    return 0;
}
