#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>

int main()
{
    int save[2];
    if (pipe(save) != 0)
    {
        printf(" An error occur openning pipe\n"); // pipe is used for passing information from one process to another.
    }
    // save[0]=read, save[1]=write

    pid_t a, b, c;
    int count = 0;
    write(save[1], &count, sizeof(int));
    pid_t parent = getpid();
    a = fork();
    b = fork();
    c = fork();
    pid_t child = getpid();
    if (child != parent && child % 2 != 0)
    {
        fork(); // as pid number odd so new child will be creat!
    }
    read(save[0], &count, sizeof(int));
    count += 1;
    write(save[1], &count, sizeof(int));
    close(save[1]);
    waitpid(a, NULL, 0);
    waitpid(b, NULL, 0);
    waitpid(c, NULL, 0);
    if (getpid() == parent)
    {
        read(save[0], &count, sizeof(int));
        close(save[0]);
        printf("total process: %d\n", count);
    }
    return 0;
}
