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
    printf("student_name\t=\t%s\n", s1.name);
    printf("student_roll\t=\t%d\n",s1.roll );
    printf("student_cgpa\t=\t%f\n",s1.cgpa);
    return 0;
}