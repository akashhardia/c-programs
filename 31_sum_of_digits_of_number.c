#include<stdio.h>

int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    
    int sum=0;
    while(n>0){
        sum = sum + n%10;           // modulus 10 gives last digit
        n /= 10;                    // divide 10 removes last digit
    }
    
    printf("%d", sum);
    return 0;
}

// 451 % 10 =           1
// 451 / 10 =  45 
// 45  % 10 =           5
// 45  / 10 =  4
// 4   % 10             4


