// 👉 Ek product ki price = 100
// 👉 Us par 18% GST add karni
// 👉 Final price print karni
#include<stdio.h>
void calculatePrice(float value);

void Program1(){
    float value = 100.0;
    calculatePrice(value);
    printf("value is : %f\n", value);
}
void calculatePrice (float value){
    value = value + (0.18 * value);
    printf("final price is:%f\n", value);
}

int main(){
    Program1();
}