#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void *user() {
    int *sum = (int *)malloc(sizeof(int));
    int j = 0;
    char user1[15000];

    scanf("%s", user1);

    int total = 0;

    for (j = 0; j < strlen(user1); j++) {
        total = total + user1[j];
    }
    *sum = total;
    return sum;
}

int main() {
    pthread_t th[3];
    int i;
    int *n[3]; 
    int f[3];

    for (i = 0; i < 3; i++) {
        pthread_create(&th[i], NULL, &user, NULL);
    }

    for (i = 0; i < 3; i++) {
  
        pthread_join(th[i], (void *)&n[i]);
        f[i] = *n[i];
    }

    if (f[0] == f[1] && f[1] == f[2] && f[0] == f[2]) {
        printf("Youreka\n");
    } else if (f[0] == f[1] || f[1] == f[2] || f[0] == f[2]) {
        printf("Miracle\n");
    } else {
        printf("Hasta la vista\n");
    }

    return 0;
}