#include<stdio.h>

int main(){
    int a,b;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    
    int smaller=a;
    if(b<a)
        smaller = b;
        
    for(int i = smaller/2; i>0; i--){          // starting from middle of smaller number down to 1
        if(a%i==0 && b%i==0){                           
            printf("%d is the gcd",i);
            break;
        }
    }
    
    return 0;
}