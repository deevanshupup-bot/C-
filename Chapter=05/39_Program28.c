//Write a function that printsd Namaste if user is indian & Bonjour if the user is french.
#include<stdio.h>
void Namaste(){
    printf("Namaste\n");
}
void Bonjour(){
    printf("Bonjour\n");
}
int main(){
    printf("enter i for indian & f for french\n");
    char ch;
    scanf("%c", &ch);
    if(ch=='i'){
        Namaste();
    }else{
         Bonjour();
    }
}
