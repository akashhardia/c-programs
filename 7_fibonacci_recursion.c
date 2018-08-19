#include<stdio.h>
int fact(int);

int main(){
    int number;
    printf("enter a number: ");
    scanf("%d",&number);
    
    int z=0;
    for(int i=1;i<=number;i++){
        printf("%d ",fact(z));      // getting numbers from fact and printing them, starting with 0
        z++;
    }
    return 0;
}

int fact(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return(fact(n-2)+fact(n-1));
    }
}