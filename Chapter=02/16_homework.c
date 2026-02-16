#include<stdio.h>
void Program1()
{
    int a, b, c;
    printf("\n--- This is program 1 output ---\n");
    scanf("%d %d %d\n", &a, &b, &c);
    printf("%d %d %d\n", a, b, c);
    float average = (a+b+c)/3;
    printf("%f\n", average);
}

void Program2()
{
    printf("\n--- This is program 2 output ---\n");
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= '0' && ch <= '9')
        printf("It is a digit");
    else
        printf("It is not a digit");
}

void Program3()
{ 
    printf("\n-----This is program 3 output-----\n");
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a <= b && a <= c)
        printf("Smallest number is %d\n", a);

    else if(b <= a && b <= c)
        printf("Smallest number is %d\n", b);

    else
        printf("Smallest number is %d\n", c);

    
}
int main()
{
    Program1();
    Program2();
    Program3();
    return 0;
}