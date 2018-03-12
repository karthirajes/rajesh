#include<stdio.h>
#include<string.h>
int main(){
    char roman_Number[1000];
    int i=0;
    long int number =0;
 
    printf("Enter any roman number (Valid digits are I, V, X, L, C, D, M):  \n");
    scanf("%s",roman_Number);
 
    while(roman_Number[i]){
 
         if(digit(roman_Number[i]) < 0){
             printf("Invalid roman digit : %c",roman_Number[i]);
             return 0;
         }
 
         if((strlen(roman_Number) -i) > 2){
             if(digit(roman_Number[i]) < digit(roman_Number[i+2])){
                 printf("Invalid roman number");
                 return 0;
             }
         }
 
         if(digit(roman_Number[i]) >= digit(roman_Number[i+1]))
             number = number + digit(roman_Number[i]);
         else{
             number = number + (digit(roman_Number[i+1]) - digit(roman_Number[i]));
             i++;
         }
         i++;
    }
 
    printf("Its decimal value is : %ld",number);
 
    return 0;
