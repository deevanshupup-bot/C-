//PASSING STRUCTURE TO FUNCTION
//ARROW OPERATOR
#include<stdio.h>
#include<string.h>
//user defined

struct student {
    char name[100];
    int roll;
    float cgpa;
    
};
void printInfo(struct student s1);
int main(){
    struct student s1 = {"Divanshu",12505066,9.8};
    printInfo(s1);
    //printf("student s1= %d \n", s1.roll);
    s1.roll=12505069; // edr se kar skte h 
    printf("student.roll = %d\n", s1.roll); 
    return 0;
   }
void printInfo(struct student s1){
    printf("student information:\n");
    printf("student.roll = %d\n", s1.roll); 
    printf("student.name = %s\n", s1.name);  
    printf("student.cgpa = %f\n",s1.cgpa);  

    s1.roll=12505069; // edr se change nhi kar skte 
}