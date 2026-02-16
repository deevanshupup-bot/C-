//break statement in loop
#include<stdio.h>
int main(){
    for(int i=1; i<=5; i++){
        if(i==3){ // imp
            break; // loop se bahar nikal jao.
        }
        printf("%d\n", i);
    }
    printf("end of the program\n");
     return 0;

}