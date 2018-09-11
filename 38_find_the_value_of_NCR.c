#include<stdio.h>

int fact(int number){
    if(number==1)
        return 1;
    else
        return number*fact(number-1);
}


int main(){
    int n, r;
    printf("enter value of n and r: ");
    scanf("%d %d", &n, &r);                      
    
    int result;
    
    result = fact(n)/(fact(n-r)*fact(r));
    
    printf("%d is the value",result);
}


//           n!
//      -----------
//      (n-r)! * r!