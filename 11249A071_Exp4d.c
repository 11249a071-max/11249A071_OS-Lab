#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>

int main()
{
    char name[50];
    struct dirent *d;
    DIR *dir;

    printf("Enter directory name: ");
    scanf("%s", name);

    dir = opendir(name);

    if(dir == NULL)
    {
        printf("Error opening directory\n");
        return 1;
    }

    while((d = readdir(dir)) != NULL)
    {
        printf("%s\n", d->d_name);
    }

    closedir(dir);
    return 0;
}