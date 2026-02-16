//if-else
#include<stdio.h>
void program1()
{
   int age;
   printf("\n-------This is program 1 output-------\n");
   printf("Enter the age:---\n");
   scanf("%d", &age);
   printf("%d", age);
   if(age>18){
    printf("adult\n");  // esme agar ek statement h toh {} ki jarurat nhi but agr jada h toh complsory h.
    printf("they can vote\n");
    printf("they can drive\n");
   }
   else{
    printf("not adult\n");
   }
   printf("thank you");//always print
}
//else if
void Program2()
{
   int age;
   printf("\n-------This is program 2 output-------\n");
   printf("Enter the age:---\n");
   scanf("%d", &age);
   printf("%d", age);

   if(age >= 18){
    printf("adult\n");
   }
   else if (age >13 && age<18){
    printf("teenager\n");
   }
   else {
    printf("child");
   }
   
}
//ternary
void Program3(){
    int age;
   printf("\n-------This is program 3 output-------\n");
   printf("Enter the age:---\n");
   scanf("%d", &age);
   age >=18 ? printf("adult\n"):printf("not adult\n");
}
//switch
void Program4(){
    printf("\n-------This is program 4 output-------\n");
    int day; //1-mon; 2-tue; 3-wed; 4-thu; 5-fri; 6-sat; 7-sun;
    //char day; //m-mon; t-tue; w-wed; th-thu; f-fri; s-sat; su-sun;// case ko name 'm','t' etc dena hoga fr apka output aa jayega 
    printf("Enter the day number:---\n");
    scanf("%d", &day);
    switch (day){
        case 1: printf("monday\n"); //agar app break nhi doge toh case 1 ke baad wale sare cases execute honge chahe wo true ho ya false.
        break;
        case 2: printf("tuesday\n");
        break;
        case 3: printf("wednesday\n");
        break;
        case 4: printf("thursday\n");
        break;          
        case 5: printf("friday\n");
        break;
        case 6: printf("saturday\n");
        break;
        case 7: printf("sunday\n"); 
        break;
        default : printf("not a valid day\n");
    }
}
//if-else if-else
void Program5()
{    
   int number;
   printf("\n-------This is program 5 output-------\n");
   printf("Enter the number:---\n");
   scanf("%d", &number);
   printf("%d", number);

   if(number >= 0){
    printf("postive\n");
    if(number % 2 == 0) {
        printf("even\n");
    }else {
        printf("odd\n");
    }

    } else {
    printf("negative");
   }
}
    
int main()
{   
    Program1();
    Program2(); 
    Program3();
    Program4();
    Program5();
    return 0;
}