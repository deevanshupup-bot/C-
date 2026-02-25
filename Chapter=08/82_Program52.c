//Write a function named slice, which takes a strings and returns a sliced from index n to m.
#include<stdio.h>
#include<string.h>
void slice(char str[], int n, int m);
int main(){
    char str[]="Helloworld";
    slice(str, 3, 6);
    return 0;

}
void slice(char str[], int n, int m){ // n and m are valid value
    char newStr[100];
    int j = 0;
    for(int i=n; i<=m; i++, j++){
        newStr[j]=str[i];

    }
    newStr[j] = '\0';
    printf("%s", newStr);

}
