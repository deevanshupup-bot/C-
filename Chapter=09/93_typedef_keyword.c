#include<stdio.h>
#include<string.h>
typedef struct computerEngineeringStudent{
    int roll;
    float cgpa;
    char name[100];
}coe; // short me 
int main(){
    coe s1;
    s1.roll = 12505066;
    s1.cgpa = 9.8;
    strcpy(s1.name, "divanshu");
    printf("student name : %s\n", s1.name);
    printf("student roll : %d\n", s1.roll);
    printf("student cgpa : %f\n", s1.cgpa);
    return 0;

}
