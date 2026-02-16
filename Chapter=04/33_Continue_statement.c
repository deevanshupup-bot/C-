//Continue Statement in C
#include <stdio.h>
int main(){
    for (int i=1; i<=15; i++){
        if(i%3==0){//(i==6)
            continue; // skip the current iteration and move to the next iteration of the loop.
        }
        printf("%d\n", i);//imp
    }
}