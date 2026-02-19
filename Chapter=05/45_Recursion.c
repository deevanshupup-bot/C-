//What is Recursion?
//program32 print "hello word" 5 times.
#include<stdio.h>
void printHW(int count);
int main(){
    printHW(5);
    return 0;
}
void printHW(int count){
    if(count==0){
        return;
    }
    printf("Hello Word\n");
    printHW(count-1);
}
