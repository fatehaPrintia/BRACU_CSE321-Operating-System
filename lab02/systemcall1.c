#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("please type: ./a.out systemcall1.c\n");
        exit(-1);
    }
    int tsk;
    tsk = open(argv[1], O_RDWR | O_CREAT, 0664);
    if (tsk == -1)
    {
        printf("file does not create!");
        return -1;
    }
    printf(" Enter the string\n");
    while (1)
    {
        char input[400];
        scanf("%[^\n]%*c", input);
        if (strcmp(input, "-1") == 0)
        {
            break;
        }
        write(tsk, input, strlen(strcat(input, " ")));
        write(tsk, "\n", 1);
    }
    close(tsk);
    return 0;
}