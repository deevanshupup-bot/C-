#include<stdio.h>
#include<string.h>
//user defined
struct student {
    char name[100];
    int roll;
    float cgpa;
    
};
int main(){
    struct student s1 = {"Divanshu",12505066,9.8};
    struct student s2 = {"seema_vasudeva",1205089,8.9};
    struct student s3={0};

    printf("student s1= %s %d %f\n", s1.name,s1.roll,s1.cgpa);

    printf("student s2= %s %d %f \n", s2.name,s2.roll,s2.cgpa );

    printf("student s3= %s %d %f\n", s3.name,s3.roll,s3.cgpa);
        
}