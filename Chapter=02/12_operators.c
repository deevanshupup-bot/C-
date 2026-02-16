#include <stdio.h>
//relational operators:------
void Program1 ()
{
    printf("\n--- This is program 1 output ---\n");
    printf("%d\n", 4==4);
    printf("%d\n", 4>3);
    printf("%d\n", 3 >= 3);
    printf("%d\n", 4<12);
    printf("%d\n", 4<=12);
    printf("%d\n", 4!=4); //false
    printf("%d\n", 4!=5); //true
}

//logical operators:------
void Program2()
{
    printf("\n-----This is program 2 output-----\n");
    printf("%d\n",5>4 && 5>2); //&&(AND)
    printf("%d\n",4<3||5>3||4>3); //OR ||
    printf("%d\n",!(3>2)&&(3>2)); // NOT !

}

//Assignment operators:------
void Program3()
{
    printf("\n--- This is program 3 output ---\n");
    int a = 5;
    int b = 15;
    printf("%d\n",a += b); //a = a + b;
    printf("%d\n",a -= b); //a = a - b;
    printf("%d\n",a *= b); //a = a * b;
    printf("%d\n",a /= b); //a = a / b;
    printf("%d\n",a %= b); //a = a % b;

}



int main()
{
    Program1();
    Program2();
    Program3();
    return 0;
}