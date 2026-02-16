//Write a program to calculate the area of square using both integer and float data types.
#include <stdio.h>
void Program1()
{
    int side;
    printf("Enter the side of square:------\n");

    scanf("%d", &side);
    printf("area is %d\n", side*side);

}

void Program2()
{
float side;

printf("Enter the area of square:----\n");

scanf("%f", &side);
printf("area of the square is %f\n", side*side);

}

int main ()
{  
    Program1();
    Program2();
    return 0;

}