#include<stdio.h>
void printString(char arr[]);
int main(){
    char *canChange = "Hello world";
    puts(canChange);
    canChange= "Heloo";
    puts(canChange);

    // char cannotChange[]="Hello World";
    // puts(cannotChange);
    // cannotChange = hello;    error
    return 0;
}
void printString(char arr[]){
    for(int i=0;arr[i] !='\0' ; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}