//Write a program to store the data of 3 students.
#include<stdio.h>
#include<string.h>
//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1;
    s1.roll=12505066;
    s1.cgpa=9.1;
    //s1.name="Divanshu";
    strcpy(s1.name,"Divanshu_Thakur");
    printf("-----1st student Data----\n");
    printf("student_name\t=\t%s\n", s1.name);
    printf("student_roll\t=\t%d\n",s1.roll );
    printf("student_cgpa\t=\t%f\n",s1.cgpa);

    struct student s2;
    s2.roll=12505067;
    s2.cgpa=9.2;
    //s2.name="Divanshu";
    strcpy(s2.name,"Geetanjli_Thakur");
    printf("----2nd student Data----\n");
    printf("student_name\t=\t%s\n", s2.name);
    printf("student_roll\t=\t%d\n",s2.roll );
    printf("student_cgpa\t=\t%f\n",s2.cgpa);

    struct student s3;
    s3.roll=12505068;
    s3.cgpa=9.3;
    //s3.name="Divanshu";
    strcpy(s3.name,"simran_Thakur");
    printf("----3rd student Data----\n");
    printf("student_name\t=\t%s\n", s3.name);
    printf("student_roll\t=\t%d\n",s3.roll );
    printf("student_cgpa\t=\t%f\n",s3.cgpa);
    return 0;
}
