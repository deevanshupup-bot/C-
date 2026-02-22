//call by value
#include<stdio.h>
void square(int n);
int main(){
    int number = 4;
    square(number);
    printf("number = %d\n", number);

    _square(&number);
    printf("number = %d\n", number);
    return 0;
}
//call by vale.
void square(int n){
    n=n*n;
    printf("square = %d\n",n);
}

void _square(int *n){
    *n = (*n)*(*n);
    printf("square =%d\n", *n);
}