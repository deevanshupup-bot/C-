#include<stdio.h> // incremented or decremented 
void case1(){
    int age=22;
    int *ptr = &age;
    printf("ptr= %u\n", ptr);
    ptr--;
    printf("ptr= %u\n", ptr);
    ptr++;
    printf("ptr=%u\n",ptr);
}
void case2(){
    float price=100.00;
    float *ptr = &price;
    printf("ptr= %u\n", ptr);
    ptr++;
    printf("ptr= %u\n", ptr);
    ptr--;
    printf("ptr=%u\n",ptr);
}
void case3(){
    char star = '*';
    char *ptr = &star;
    printf("ptr= %u\n", ptr);
    ptr++;
    printf("ptr= %u\n", ptr);
    ptr--;
    printf("ptr=%u\n",ptr);
}

//We can also compare 2 pointers.
void case4(){
    int age =22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("differnce = %d\n", ptr-_ptr);
    _ptr = &age;
    printf("comparison = %u\n", ptr==_ptr);

}

int main(){
    case1();
    case2();
    case3();
    case4();
    return 0;
}