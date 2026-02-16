//Print all the odd number from 5 to 50.
#include<stdio.h>
int main(){
    for(int i=5; i<=50; i++){
        if(i%2!=0){// odd number is a number which is not divisible by 2.
            printf("%d\n", i);
        }
    }
     return 0;

}