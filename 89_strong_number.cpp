// Strong Number:       the sum of factorials of each digit is equal to that number 

#include<stdio.h>

int fact(int n){
    if(n==1)
        return 1;
    else{
        return n*fact(n-1);
    }
}

int main(){
    int n;
    
    printf("enter a number");
    scanf("%d",&n);
    
    int temp = n, i, sum = 0;
    
    while(temp>0){
        i = temp%10;
        sum += fact(i);
        temp = temp/10;
    }
    
    if(sum == n ){
        printf("it is strong number");
    }else{
        printf("not a strong nubmer");
    }
 
    return 0;
}

//      145    =    1! + 4! + 5!