#include<stdio.h>
int main(){
    int number;
    printf("enter a number: ");
    scanf("%d",&number);
    
    int rev = 0;
    while(number!=0){
        rev = rev *10;
        rev = rev + number%10;                      // %10 gives us the last number
        number = number/10;                         // /10 erases the number from behind
    }
    
    printf("Reversed number is: %d",rev);
    return 0;
}