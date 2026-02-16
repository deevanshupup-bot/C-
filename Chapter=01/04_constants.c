#include <stdio.h>

int main()
{
    // Integer constant
    const int a = 9;

    // Floating constant
    const float pi = 3.14;

    // Character constant
    char grade = 'A';

    // String constant
    char name[] = "Deevanshu singh Rajput";

    // Const keyword
    const int year = 2027;
    year = 2028; // This will cause a compilation error because 'year' is a constant

    printf("const Integer constant: %d\n", a);
    printf("const Float constant: %.2f\n", pi);
    printf("Character constant: %c\n", grade);
    printf("String constant: %s\n", name);
    printf("Const keyword value: %d\n", year);

    return 0;
}
