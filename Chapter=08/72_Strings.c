//What is strings?
#include<stdio.h>
void program1(){
    char name[] = "Hello";
    char myname[]={'D','i','v','a','n','s','h','u','\0'};
    printf("%s\n%s\n", name, myname);
}

void Program2(){
    char name1[50];
    char name2[50];

    // scanf input
    printf("Enter name using scanf: ");
    scanf("%s", name1);     // space तक पढ़ेगा

    getchar();              // Enter हटाने के लिए

    // fgets input
    printf("Enter name using fgets: ");
    fgets(name2, 50, stdin);   // पूरा line पढ़ेगा

    // output
    printf("\nUsing scanf: %s\n", name1);
    printf("Using fgets: %s", name2);

}

int main(){
    Program2();
    return 0;
}

