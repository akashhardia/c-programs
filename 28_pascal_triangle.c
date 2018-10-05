//  pascal triangle
#include<stdio.h>

int fact(int a){
    if(a==0)
        return 1;
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
    
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n-row; col++){
            printf(" ");
        }
        for(int col=1; col<=row; col++){
                printf("%d ",fact(row-1)/(fact(col-1)*fact(row-1-(col-1))));
        }
        printf("\n");
    }
    return 0;
}


//    12345
// 1      1
// 2     1 1
// 3    1 2 1
// 4   1 3 3 1
// 5  1 4 6 4 1 