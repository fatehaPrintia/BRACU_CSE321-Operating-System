#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int item = arr[i];
        int j=i-1;
        while (j >= 0 && item > arr[j]) {
            arr[j+1] =arr[j];
            j--;
        }
        arr[j+1]=item;
    }

    printf("Sorted array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {

    int size = argc - 1;
    int array[size];

    for (int i = 1; i < argc; i++) {
        array[i - 1] = atoi(argv[i]);
    }

    sort(array, size);


    return 0;
}
