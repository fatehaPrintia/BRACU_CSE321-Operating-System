// #include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){

int pid;
int gchild;
pid =fork();
if (pid==0){
    printf("2.Chlid process process id: %d\n",getpid());
    gchild=fork();
    if (gchild==0){

        printf("3.Grand-child  process id is: %d\n", getpid());
    }else{
    gchild=fork();
    if (gchild==0){
        printf("4.Grand-child  process id is: %d\n", getpid());
    }else {
    gchild=fork();
    if (gchild==0){
        printf("5.Grand-child  process id is: %d\n", getpid());

}}
}}else if (pid>0){

    printf("1.Parent process id: 0\n");
}

}
