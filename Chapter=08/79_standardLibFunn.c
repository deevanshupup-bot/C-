
#include<stdio.h>
#include<string.h>
//strlen(str)
void Program1(){
    char name []="Deevanshu";
    printf("length : %d", strlen(name));
}
//strpy(new str,old)
void Program2(){
    char s1[20]="Mother";
    char s2[20];
    strcpy(s2,s1);
    printf("%s", s2);
}
// strcmp
void Program3(){
    char s1[]="abc";
    char s2[]="abc";
    int result = strcmp(s1, s2);
    printf("%d", result);
}
//strcat
void Program4(){
    char firstStr[100]="hello\t";
    char secStr[100]="world";
    strcat(firstStr, secStr);
    puts(firstStr);
}

//strcmp (ASCII)
void Program5(){
    char D1[50]="Apple";
    char D2[50]="Banana";
    printf("%d\n", strcmp(D1, D2));

}

int main(){
    Program5();
    return 0;
}