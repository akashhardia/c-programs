#include<stdio.h>

int main(){
    int number;
    printf("enter the number to check prime: ");
    scanf("%d",&number);
    
    int prime = 1;
    for(int i=number/2;i>1;i--){
        if(number/i == 0){
            prime = 0;
            printf("not a prime number");
            break;
        }
    }
    
    if(prime == 1){
        printf("it is a prime number");
    }
    
    return 0;
}