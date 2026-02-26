#include<stdio.h>

// structure
struct student {
    int roll;
    float cgpa;
    char grade;
};

int main() {

    struct student s1;

    // values
    s1.roll = 10;
    s1.cgpa = 9.2;
    s1.grade = 'A';

    // printing values
    printf("Values:\n");
    printf("Roll  = %d\n", s1.roll);
    printf("CGPA  = %.2f\n", s1.cgpa);
    printf("Grade = %c\n\n", s1.grade);

    // printing addresses
    printf("Addresses:\n");
    printf("Address of roll  = %u\n", &s1.roll);
    printf("Address of cgpa  = %u\n", &s1.cgpa);
    printf("Address of grade = %u\n", &s1.grade);

    // size of structure
    printf("\nSize of structure = %d bytes\n", sizeof(s1));

    return 0;
}