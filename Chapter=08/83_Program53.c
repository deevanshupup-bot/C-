//Write to function to count the occurrence of words of vowels in a string.
#include<stdio.h>
#include<stdio.h>
int countVowels(char str[]);
int main(){
    char str[]="HelloWorld";
    printf("vowels are : %d", countVowels(str));

}
int countVowels(char str[]){
    int count = 0;
    for (int i=0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i]=='e' || str[i] == 'i'||
           str[i] == 'o' || str[i]=='u'){
            count++;
        }
    }
    return count;
}

