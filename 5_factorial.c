#include<stdio.h>

int main(){
    int number;
    printf("enter number to find its factorial: ");
    scanf("%d", &number);
    
    int factorial = 1;
    for(int i=number; i>1;i--){                     //  5*4*3*2*1
        factorial = factorial*i;
    }
    
    printf("factorial is: %d", factorial);
    return 0;
}