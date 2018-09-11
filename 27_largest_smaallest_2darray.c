#include<stdio.h>

int main(){
    int arr[100][100];
    int row, col;
    
    printf("enter the number of rows: ");
    scanf("%d",&row);
    row--;
    printf("enter the number of col: ");
    scanf("%d",&col);
    col--;
    
    for(int i=0;i<=row;i++){
        for(int j=0;j<=col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i=0;i<=row;i++){
        for(int j=0;j<=col;j++){
            printf("%d ",arr[i][j]);
        }
    }
    int small=arr[0][0], large=arr[0][0];
    for(int i=0;i<=row;i++){
        for(int j=0;j<=col;j++){
            if(arr[i][j]>large){
                large = arr[i][j];
            }
            if(arr[i][j]<small){
                small = arr[i][j]; 
            }
        }
    }
    
    printf("\n smallest is %d, largest is %d", small,large);
    
    return 0;
}