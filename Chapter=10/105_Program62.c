//Make a program to input student information form a user and enter it to a file.
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("student.txt","w");  

    char name[100];
    int age;
    float cgpa;

    printf("enter name : ");
    scanf("%s", &name);
    printf("enter age : ");
    scanf("%d", &age);
    printf("enter cgpa : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "STUDENT NAME : %s\n", name);
    fprintf(fptr, "STUDENT AGE : %d\n", age);
    fprintf(fptr, "STUDENT CGPA : %f\n", cgpa);

    fclose(fptr);
    return 0;
}