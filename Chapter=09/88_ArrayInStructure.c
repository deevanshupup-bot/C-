#include<stdio.h>
#include<string.h>
//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student ece[100];
    ece[0].roll=1664;
    ece[0].cgpa=6.2;
    strcpy(ece[0].name, "Nisha_Rajput");
    printf("name = %s\n",ece[0].name);
    printf("Roll = %d\n",ece[0].roll);
    printf("CGPA = %f\n",ece[0].cgpa);
    return 0;

}
