// Add two numbers without + operator

#include<stdio.h>

int main(){
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    
    while(num2>0){
        num1++;
        num2--;
    }
    
    printf("Output is %d", num1);
    
    return 0;
}
