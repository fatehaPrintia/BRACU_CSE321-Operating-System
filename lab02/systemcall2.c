#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include<sys/wait.h>

int main(){

int pid;
int gchild;
pid =fork();
if (pid==0){
   
    gchild=fork();
    if (gchild==0){

        printf("I am grandchild \n");
    }
    else if (gchild>0){
        wait(NULL);
         printf("I am child \n");

    }}
else if (pid>0){
    wait(NULL);

    printf("I am parent \n");
}

}
