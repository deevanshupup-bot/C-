#include <stdio.h>
#include<math.h>
//(I)Type Declaration instruction
void Program1() 
{
    int a = 22;
    int b = a;
    int c = b*6;
    int d = 1, e;
    e = c + d;
    printf("\n--- This is program 1 output ---\n");
    printf("value of a is %d\n", a);
    printf("value of b is %d\n", b);
    printf("value of c is %d\n", c);
    printf("value of d is %d\n", d);
    printf("value of e is %d\n", e);
}

//Arithmetic instructions:------

void Program2()
{
    int a =18, b = 45;
    int sum = a + b;
    int multiply = a*b;
    int subtraction = a - b;
    int division = a/b;
    printf("\n--- This is program 2 output ---\n");
    printf("%d\n", sum);
    printf("%d\n", multiply);
    printf("%d\n", subtraction);
    printf("%d\n", division);
}

void Program3() //Power function`
{
   int b = 2, c = 3;
   double power = pow(b,c); //NOTE:- pow(b,c)for b to the power c.
   printf("\n--- This is program 3 output ---\n");
   printf("%lf\n", power);
}

void Program4() //Modulus operator
{
    printf("\n--- This is program 4 output ---\n");
    printf("%d\n", -3%2);
}

void Program5() //Type conversion.
{
   int a = 2;
   int b = 2;
   
   int c = 2.0;
   float d = 2;

   float e = 2.0;
   float f = 2.0;

    printf("\n--- This is program 5 output ---\n");
    printf("%d\n",a+b);
    printf("%f\n", (float)(c*b));
    printf("%f\n", e*f);

}

void Program6() // Operator Precedence:-
{ 
    int a = 4 + 9 * 10; // hamesha back se hote h calucation.
    printf("\n--- This is program 6 output ---\n");
    printf("%d\n",a);
}

void Program7() //Associativity(for some precedence)
{
    printf("\n-----This is program 7 output------\n");
    int a = 4*3/6*2; //hamesha right to left chlna h esme.
    printf("%d\n", a);
    // Practice problem solved:-04
    int b = 5*2-2*3;
    printf("%d\n", b);
    int c = 5*2/2*3;
    printf("%d\n", c);
    int d = 5*(2/2)*3;
    printf("%d\n", d);
    int e = 5+2/2*3;
    printf("%d\n", e);

}
// control instructions:----
//types:- sequence--->Decision---->Loop------>case control
void program8() 
{
    printf("\n--- This is program 8 output ---\n");
    int i, num;

    // -------- Sequence --------
    printf("Enter a number: ");
    scanf("%d", &num);

    // -------- Decision --------
    if(num % 2 == 0)
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");

    // -------- Loop --------
    printf("Counting from 1 to 5:\n");
    for(i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }

    //--------case ka aghe are ge ------
}
int main()
{
    Program1();
    Program2();
    Program3();
    Program4();
    Program5();
    Program6();
    Program7();
    program8();

    return 0;

}
