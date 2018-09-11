#include<stdio.h>

void transpose(int arr[100][100],int row, int col){
    
    int temp[100][100];
    for(int i=0;i<=row;++i){
        for(int j=0;j<=col;++j){
            temp[i][j]=arr[j][i];                   // logic
        }
    }
    
    for(int i=0;i<=row;i++){
        for(int j=0;j<=col;j++){
            printf("%d ",temp[i][j]);
        }
        printf("\n");
    }
}



int main(){
    int col, row;
  
    printf("ENTER NO OF ROW:");     scanf("%d",&row); row--;
    printf("ENTER NO OF COL:");     scanf("%d",&col); col--;
    
    int mat1[100][100];
    
    printf("enter items in matrix: \n");
    for(int i=0;i<=row;i++){
        for(int j=0;j<=col;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    
    for(int i=0;i<=row;i++){
        for(int j=0;j<=col;j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    
    printf("transpose is: \n");
    transpose(mat1, row, col);

    return 0;
}