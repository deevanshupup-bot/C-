// Use library function to calculate the square of a number given by user.
#include<stdio.h>
#include<math.h>
void calculatePrice(float value);
int main(){
    int n=4;
    printf("%f", pow(n,4));
    return 0;
}
void calculatePrice (float value){
    value = value + (0.18 * value);
    printf("final price is:%f\n", value);
} 