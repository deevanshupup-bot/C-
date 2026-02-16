// Write a program to give grades to a student
//marks<30 is C
//30<=marks <70is B
//70<=marks <90 is A
//90<=marks <=100 is A+
#include<stdio.h>
int main()
{
   int marks;
   printf("\n-----This is Program10 output-----\n");
   scanf("%d", &marks);

   if(marks < 30){
    printf("C\n");
    printf("Better luck next time\n");
   }
   else if(marks >= 30 && marks < 70){
   printf("B\n");
   printf("You can do better\n");
   }
   else if(marks >= 70 && marks < 90){
      printf("A\n");
      printf("Good job\n");
   }
   else {
            printf("A+\n");
            printf("Excellent\n");
   }
   return 0;          
}