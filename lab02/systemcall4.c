#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    if (argc < 2) {
        printf("Please pass  an array!\n");
        return -1;
    }

    // system("gcc -o sort sort.c");
    // system("gcc -o oddEven oddEven.c");

    pid_t pid = fork();

    if (pid == 0) {
        execv("sort", argv);
    } else {
        wait(NULL);
        execv("oddEven", argv);
    }
    return 0;
}
