//Make a program that inputs user's name & prints its length.
#include<stdio.h>
void printString(char arr[]);
int countLength(char arr[]);
int main(){
    char name[100];
    fgets(name,100,stdin);
    printf("lenth is : %d", countLength(name));
    return 0;
}
int countLength(char arr[]){
    int count=0;
    for(int i=0; arr[i]!='\0'; i++){
        count++;
    }
    printf("\n");
    return count-1; // esko nhi kare ge toh \0 yh wala vi add hoga 
}

void printString(char arr[]){
    for(int i=0;arr[i] !='\0' ; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}