//Create s string firsttime and lasttime to store details os user and print all the charcters using a loop.
#include<stdio.h>
void printString(char arr[]);
int main(){
    char firstTime[] = "Divanshu";
    char lastTime[] = "Thakur";

    printString(firstTime);
    printString(lastTime);
    return 0;
}
void printString(char arr[]){
    for(int i=0;arr[i] !='\0' ; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}

