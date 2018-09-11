//  pascal triangle
#include<stdio.h>

int fact(int a){
    int res=1;
    for(int i=a;i>=1;i--){
        res=res*i;
    }
    return res;
}

int main(){
    int n;
    printf("enter no. of rows:");
    scanf("%d",&n);
    n--;
    
    for(int row=0;row<=n;row++){
        //spaces
        for(int col=0;col<=n-row;col++){
            printf(" ");
        }
        
        //numbers
        for(int col=0;col<=row;col++){
            printf("%d ",fact(row)/(fact(col)*fact(row-col)));
        }
        printf("\n");
    }
    return 0;
}

//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1 