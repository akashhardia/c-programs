#include<stdio.h>

int main(){
    int terms;
    printf("enter the number of terms: ");
    scanf("%d",&terms);
    
    int first = 0, second = 1;
    int next = 0;
    for(int i=0;i<terms;i++){
        if(i == 0){
            printf("0 ");                       
        }
        if(i == 1){
            printf("1 "); 
        }
        else{
            next = first + second;                  // first + second gives us 'next'
            printf("%d ",next);
            first = second;                         // now 2nd is 1st number
            second = next;                          // & next is 2nd number
        }
    }
    return 0;
}