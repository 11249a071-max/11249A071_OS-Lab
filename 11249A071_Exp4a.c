#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>

int main()
{
    char path1[50];
    struct stat nfile;

    printf("Enter file name: ");
    scanf("%s", path1);

    if(stat(path1, &nfile) == -1)
    {
        perror("Error");
        return 1;
    }

    printf("User ID: %d\n", nfile.st_uid);
    printf("File Size: %ld\n", nfile.st_size);
    printf("Last Access Time: %ld\n", nfile.st_atime);
    printf("Last Modification Time: %ld\n", nfile.st_mtime);
    printf("Number of Links: %ld\n", nfile.st_nlink);

    return 0;
}