#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void oddEven(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d is Odd\n", arr[i]);
        } else {
            printf("%d is even\n", arr[i]);
        }
    }
}

int main(int argc, char *argv[]) {

    int size = argc - 1;
    int arr[size];

    for (int i = 1; i < argc; i++) {
        arr[i - 1] = atoi(argv[i]);
    }
    oddEven(arr, size);
    return 0;
}
