//Write a program to check if a number is divisible by 2 or not.
#include <stdio.h>
int main()
{
    //even---->1
    //odd---->0
    int x;
    printf("enter the number\n");
    scanf("%d\n", &x);
    printf("%d\n", x % 2 == 0);
    return 0;
}