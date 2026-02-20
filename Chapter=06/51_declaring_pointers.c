#include<stdio.h>
int main(){
    int age=22;
    int *ptr1 = &age;
    int _age = *ptr1;
    printf("%d%%\n", _age);

    char star ='*';
    char *ptr2 = &star;
    char _star = *ptr2;
    printf("%c\n", _star);

    float price = 100.00;
    float *ptr3 = &price;
    float _price = *ptr3;
    printf("%f\n", _price);
    return 0;
}

