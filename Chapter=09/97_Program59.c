//You have to store the marks of 30 student on class.
//what will you use?
//a. array of 10 float 👌
//b. strcuture
#include<stdio.h>

int main(){

    float marks[30];
    int i;

    // Input marks
    for(i = 0; i < 30; i++){
        printf("Enter marks of student %d: ", i+1);
        scanf("%f", &marks[i]);
    }

    // Display marks
    printf("\nMarks of students:\n");
    for(i = 0; i < 30; i++){
        printf("Student %d = %.2f\n", i+1, marks[i]);
    }

    return 0;
}