// what is Loop? (for loop, while loop, do-while loop)
#include <stdio.h>
void Program1()
{ //i means interator or counter.
    printf("\n-----This is Program1 output:-----\n");
    for(int i=1; i<=10; i=i+1){
        printf("%d", i);
        printf(" hello world\n");
    } 
}
void Program2(){
    for(int i=10; i>=1; i=i-1){
        printf("%d\n", i);
    }
}

void Program3(){
    for(int i=0; i<=10; i=i+1){
        printf("%d\n", i);
    }
}

void Program4()
//increment operator:- i++(pre increment)  ++i(post increment)
{   printf("\n-----This is Program4 output:-----\n");
    int i=2;
    printf("\n---1st part---\n");
    printf("%d\n", i++);// use then increase
    printf("%d\n", i);
    
    printf("\n---2nd part---\n");
    printf("%d\n",++i);// increase then use
    printf("%d\n", i);
    
}
//decrement operator:- i--(pre decrement) --i(post decrement)
void Program5()
{   printf("\n-----This is Program4 output:-----\n");
    int i=3;
    printf("\n---1st part---\n");
    printf("%d\n", i--);// use, then decrease
    printf("%d\n", i);
    
    printf("\n---2nd part---\n");
    printf("%d\n",--i);// decrease then use
    printf("%d\n", i);
}
//loop counter can be float or even character.
void Program6(){
    for(float i=1.0; i<=5.0; i++){
        printf("%f\n", i); } 
        
        for(char i='a'; i<='e'; i++){
            printf("%c\n", i);
}
}
//infinte loop
void Program7(){
    for(int i=1; ;i++) {  // yh chlta jayega bcz condition nhi di hai. 
        printf("Hello world\n");   
}
}
int main() { 
    Program7(); 
    return 0; 

}




