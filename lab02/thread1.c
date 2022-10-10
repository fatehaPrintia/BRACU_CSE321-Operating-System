#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void* create(void *arg){
	int final=*(int*)arg;
    printf(" Thread- %d running\n",final+1);
    printf("Thread- %d closed \n",final+1);


}

int main() {
    pthread_t th[5];
    int i;
    for (i=0; i<5; i++)
    {
			int *t=malloc(sizeof(int));
	*t=i;
        pthread_create(&th[i],NULL,&create,t);
        sleep(2);
    }
    for (i=0;i<5;i++){
        pthread_join(th[i],NULL);
            }
    return 0;
}
