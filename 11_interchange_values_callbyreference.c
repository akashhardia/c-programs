#include<stdio.h>
void interchange(int *, int *);

int main(){
    int a,b;
    printf("enter two numbers to interchange: ");
    scanf("%d%d",&a,&b);
    
    interchange(&a,&b);                     // call by reference (there addresses are passed)
    
    printf("a: %d, b: %d",a,b);             // interchanged values
    
    return 0;
}

void interchange(int *a,int *b){            // original variables are accesed
    *a = *a - *b;
    *b = *a + *b;
    *a = *b - *a;
}