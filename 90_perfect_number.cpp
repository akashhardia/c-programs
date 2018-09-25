// Perfect number-      whose sum of all divisors is equal to that number 
#include<stdio.h>

int main(){
    int n;
    
    printf("enter a number: ");
    scanf("%d",&n);
    
    int sum = 0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    
    if(sum==n)
        printf("this is perfect number");
    else
        printf("not a perfect number");
    
    return 0;
}

//      28  =   1 + 2 + 4 + 7 + 14