#include<stdio.h>

int main(){
    int number;
    printf("enter a number to find its factorial: ");
    scanf("%d", &number);
    
    int factorial=1;
    int fact(int n){
        if(n == 1){
            return n;
        }else{
            return n * fact(n-1);                   // 5*4*3*2*1
        }
    }
    
    factorial = fact(number);
    printf("%d : ",factorial);
    return 0;
}