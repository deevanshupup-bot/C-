//Write a program to check if a student passed or falied.
//marks>=30 pass
//marks<30 fail

#include <stdio.h>
int main()
{
    int marks;
    printf("\n-------This is program 6 output-------\n");
    printf("Enter the marks:---\n");
    scanf("%d", &marks);
//     if(marks >= 0 && marks <= 30){
//         printf("fail\n");
//     } else if (marks > 30 && marks <= 100){
//         printf("PASS\n");
//     } else {
//         printf("wrong marks");
//     }
// }
marks<=30 ? printf("fail\n"):printf("PASS\n");
return 0;
}