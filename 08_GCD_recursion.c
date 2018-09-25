#include<stdio.h>
int gcd(int, int);
int main(){
    int a,b;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    
    printf("Gcd is: %d", gcd(a,b));
    
    return 0;
}

int gcd(int a, int b){
    if(a>b)                     // a>b  then a-b
        gcd(a-b,b);
    else if(b>a)                // b>a  then  b-a
        gcd(a,b-a);
    else                        // a==b  then a is our gcd
        return a;
}