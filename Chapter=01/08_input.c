#include <stdio.h>
int main() {
    int a, b;
    printf("Enter the value:---------\n");
    
    scanf("%d %d", &a, &b );
    printf("a = %d, b = %d\n", a, b);

    int sum = a + b;
    printf("sum = %d\n", sum);

    return 0;
}