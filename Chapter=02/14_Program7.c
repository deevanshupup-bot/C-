// Are the following lines of code valid or invalid? 
#include<stdio.h>
#include<math.h>
void Program1()
{
    //int a = 8^8 = valid h 
    int a = 8;
    int b = 4;
    printf("%d\n",pow(a,b) );
}
void Program2()
{
    //int x; int y=x; valid h bcz ; lga hoya h eska mtlb hota h end
    int x; int y = x;  
}
void Program3()
{
    //int x, y=x;  yh invalid h bcz esme , komma lga h 
}

void Program4()
{
    //char star = '**' invalid h 
    char star = '**'; //char star = '*' valid h
}
int main()
{
    Program1();
    return 0;
}