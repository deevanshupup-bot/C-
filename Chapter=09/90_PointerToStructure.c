//Pointer TO Structure
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
    printf("student roll with ptr=%d\n",(*ptr).roll);
    return 0;
   
        
}