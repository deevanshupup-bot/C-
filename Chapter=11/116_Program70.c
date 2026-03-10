//Allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even number.
#include<stdio.h>
#include<stdlib.h>

int main() {

    int *ptr;

    // allocate memory for 5 odd numbers
    ptr = (int *) malloc(5 * sizeof(int));

    printf("First 5 odd numbers:\n");

    for(int i = 0; i < 5; i++) {
        ptr[i] = 2*i + 1;
        printf("%d\n", ptr[i]);
    }

    // reallocate memory for 6 even numbers
    ptr = (int *) realloc(ptr, 6 * sizeof(int));

    printf("First 6 even numbers:\n");

    for(int i = 0; i < 6; i++) {
        ptr[i] = 2*(i+1);
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    return 0;
}