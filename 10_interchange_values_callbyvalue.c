#include<stdio.h>

void interchange(int,int);
int main(){
    int a,b;
    printf("enter number to interchange: ");
    scanf("%d%d",&a,&b);                            
    
    interchange(a,b);                               // call by value
    
    return 0;
}

void interchange(int a, int b){                     // copies of a and b are made in new variables
    a = a-b;
    b = a+b;
    a = b-a;
    printf("a: %d, b: %d", a,b);
}