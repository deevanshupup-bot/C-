//what is Array?
#include <stdio.h>
int main(){
    // int marks1=97;
    // int marks2=89;
    // int marks3=87;
    // int marks4=78;
    
    int marks[3];
    printf("enter physics :");
    scanf("%d", &marks[0]);

    printf("enter chem :");
    scanf("%d", &marks[1]);

    printf("enter math :");
    scanf("%d", &marks[2]);

    printf("physics = %d, chem = %d, math = %d", marks[0], marks[1], marks[2]);

    // int marks[]={97, 89, 87, 78};
    
}