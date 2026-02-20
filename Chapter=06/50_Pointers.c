#include<stdio.h>
int main(){
    int age=21;
    int *ptr = &age;
    int _age =*ptr;
    printf("%d%%", _age);
    return 0;
}