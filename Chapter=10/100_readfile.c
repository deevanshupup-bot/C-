#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("TEXT.text","r");
    
    int ch;

    fscanf(fptr,"%d",&ch);
    printf("charcter = %d\n", ch);

    fscanf(fptr,"%d",&ch);
    printf("charcter = %d\n", ch);

    fscanf(fptr,"%d",&ch);
    printf("charcter = %d\n", ch);

    fclose(fptr);
    return 0;
}