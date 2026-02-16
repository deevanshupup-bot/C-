// Write a program to find if a character entered by user is upper case or not.
#include<stdio.h>
int main(){
    char ch;
    printf("Enetr character:--\n");
    scanf("%c", ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("upper case\n");
    }else if (ch >= 'a' && ch <= 'z'){
        printf("lower case\n");
    }
    else{
        printf("not English letter\n");
    }
return 0;
}