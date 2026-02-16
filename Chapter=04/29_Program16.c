//print the table of a number input by the user.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i=1; i<=10; i++){
        printf("%d\n",n*i);// bhut simple hai, n*i krna hai.
    }
    return 0;

}