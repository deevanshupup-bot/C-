#include <stdio.h>

void program1()
{
    int age;
    float height;
    double salary;
    char grade;

    printf("\n---- This is program 1 output ----\n");

    printf("Enter age height salary grade:\n");

    scanf("%d %f %lf %c", &age, &height, &salary, &grade);

    printf("Age = %d\n", age);
    printf("Height = %f\n", height);
    printf("Salary = %lf\n", salary);
    printf("Grade = %c\n", grade);

}

void program2()
{
    int age = 25;
    float height = 5.9;
    double salary = 50000.50;
    char grade = 'A';

    printf("\n--- This is program 2 ouput ---\n");

    printf("Age = %d\n", age);
    printf("Height = %f\n", height);
    printf("Salary = %lf\n", salary);
    printf("Grade = %c\n", grade);
}

void program3()
{
    int age;
    char grade;

    printf("\n--- This is program 3 output ---\n");

    printf("Enter age and grade:\n");
    scanf("%d", &age);
    scanf(" %c", &grade); // space compulsory.

    printf("Age = %d\n", age);
    printf("Grade = %c\n", grade);

}

int main()
{
    program1();
    program2();
    program3();
    return 0;

}
