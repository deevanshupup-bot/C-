//Ask the user to enter their firstName and print it back to them.
//Also try this with their fullName.
#include<stdio.h>
void printString(char arr[]);
int main(){
    // char fistname[50];
    // scanf("%s", fistname);
    // printf("your name is %s", fistname);

    char fullName[50];
    scanf("%s", fullName);
    printf("your name is %s", fullName);
    return 0;
}
void printString(char arr[]){
    for(int i=0;arr[i] !='\0' ; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}