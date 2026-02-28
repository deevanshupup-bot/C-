//ARROW OPERATOR
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
    printf("student s1= %d \n", s1.roll);

    struct student *ptr = &s1;
    printf("student ->roll = %d\n",ptr->roll);  // main line
    printf("student ->name = %s\n",ptr->name);  // main line
    printf("student ->cgpa = %f\n",ptr->cgpa);  // main line


    return 0;
   
        
}