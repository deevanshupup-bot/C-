#include <stdio.h>
void Program1() 
{
    int a, b, sum;
    printf("\n---- This is program 1 output ----\n");
    printf("Enter two numbers:\n");

    scanf("%d %d", &a , &b);
    sum = a + b;
    printf("sum = %d\n", sum);
}

void Program2()
{
    int a = 50, b =100, sum;
    printf("\n---- This is program 2 output ----\n");
    sum = a + b ;
    printf("%d\n", sum);
}

int main()
{ 
    program1();
    Program2();
    return 0;

}