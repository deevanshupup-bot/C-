#include<stdio.h>
int sum(int a,int b );//FUnction declaration
int main(){ // defination
    int result;
    result = sum(5,9);
    printf("%d", result);
    return 0;
}
int sum(int a, int b){ // call
    return a+b;
}
