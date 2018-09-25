// FLOYD triangle

#include<stdio.h>

int main(){
    int n;
    
    printf("enter a number: ");
    scanf("%d",&n);
        
    int count= 1;    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ", count++);
        }
        printf("\n");
    }       
    
    return 0;
}


//  FLOYD

//  1
//  2 3 
//  4 5 6
//  7 8 9 10
//  11 12 13 14 15 