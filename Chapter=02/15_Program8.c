#include<stdio.h>
void Program1()
{
    printf("\n--- This is program 1 output ---\n");
    int issunday = 1;
    int isSnowing =1;
    printf("%d\n", issunday && isSnowing); 
}
void Program2()
{
    printf("\n--- This is program 2 output ---\n");
    int ismonday = 0;
    int israining = 1;
    printf("%d\n", ismonday || israining);
}
void Program3()
{
    printf("\n--- This is program 3 output ---\n");
    int x;
    printf("enter the number\n");
    scanf("%d\n", &x);
    printf("%d\n", x>9 && x<100);
}

int main()
{
    Program1();
    Program2();
    Program3();
    return 0;
}