#include<stdio.h>
int sum(int a, int b); // function declaration/prototype
int main(){
    int a,b;
    printf("Enter 1st number\n");
    scanf("%d", &a);
    printf("Enter 2nd number\n");
    scanf("%d", &b);
    int result = sum(a,b); // funcation call 
    printf("sum=%d\n", result);
    return 0;
}
    int sum(int a, int b){ //function defination
    return a+b;
}