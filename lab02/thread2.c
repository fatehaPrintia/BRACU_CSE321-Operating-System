#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void* create(void *arg)
{
    int final=*(int*)arg;
    int num;
    int i=final*5;

    for (num=i; num<i+5; num++)
    {
        printf(" Thread- %d %d prints\n",final,num+1);
    }

}

int main()
{
    pthread_t th[5]; //created thread
    int i;
    for (i=0; i<5; i++)
    {
        int *t=malloc(sizeof(int));
        *t=i;
        pthread_create(&th[i],NULL,&create,t);
        sleep(1);
    }
    for (i=0; i<5; i++)
    {
        pthread_join(th[i],NULL);
    }
    return 0;
}
