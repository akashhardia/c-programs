#include<stdio.h>

double value(int number){
    double sum=0;
    for(double i=number; i>=1;i--){
        sum = sum + 1/i;
    }
    return sum;
}


int main(){
    double number;
    
    printf("enter number: ");
    scanf("%lf", &number);                      // %lf for double
    
    printf("%lf is the values",value(number));
}


//      1 + 1/2 + 1/3 + 1/4 + 1/5 . . . . .