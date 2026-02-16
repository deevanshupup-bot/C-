//Write a program to calculate the area of circle. (pi r^2) pi= 3.14
#include <stdio.h>
int main(){
    float radius;

    printf("Enter the radius:----------\n");
    scanf("%f", &radius);
    
    printf("area of the radius is  %f\n", 3.14*radius*radius);
    return 0;
}