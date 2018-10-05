// FLOYD triangle

#include<stdio.h>

int main(){
    int n;
    
    printf("enter a number: ");
    scanf("%d",&n);
        
    int count= 1;    
    for(int row=1; row<=n;row++){
        for(int col=1; col<=row; col++){
            printf("%d ", count++);
        }
        printf("\n");
    }       
    
    return 0;
}


//  FLOYD
//       1 2 3 4 5
// 1     1
// 2     2 3 
// 3     4 5 6
// 4     7 8 9 10
// 5     11 12 13 14 15 