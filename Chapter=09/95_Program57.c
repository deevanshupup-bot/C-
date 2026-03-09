//Create a structure to store vectors.Then make a function to return sum of 2 vectors
#include<stdio.h>
struct vector{
    int x;
    int y;
};
void calcSum(struct vector v1,struct vector v2,struct vector v3);
int main(){
    struct vector v1 = {5,10};
    struct vector v2 = {3,7};
    struct vector v3 = {5,7};
    
    calcSum( v1, v2, v3);
    return 0;
}
void calcSum(struct vector v1,struct vector v2,struct vector v3){
    struct vector sum;
    sum.x = v1.x + v2.x + v3.x;
    sum.y = v1.y + v2.y + v3.y;

    printf("sum of x is : %d\n", sum.x);
    printf("sum of y is : %d\n", sum.y); 
}