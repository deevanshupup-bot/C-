#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("TEXT.text","w");  

    fputc('M', fptr);
    fputc('a', fptr);
    fputc('n', fptr);
    fputc('g', fptr);
    fputc('o', fptr);

    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr ));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));

    fclose(fptr);
    return 0;
}