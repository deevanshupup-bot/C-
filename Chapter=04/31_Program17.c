//Keep taking number as input from user until user enters an odd number.
#include<stdio.h>
int main(){
    int n;
    do{
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("%d\n", n);
        if(n%2!=0){
            break;}    
    } while(1);
     printf("thank you for using the program\n");
     return 0;

}