//incomplete
#include<stdio.h>

void mat_mul(int first[100][100], int second[100][100], int col, int row){
    int c[100][100];
    c[0][0]=0;
    for(int i=0; i<=row; i++){
        for(int j=0; i<=col;j++){
            c[i][j] += first[i][j] * second[i][j];
        }
    }
}

int main(){
    int col,row; 
    printf("ENTER NO OF COL:");     scanf("%d",&col); col--;
    printf("ENTER NO OF ROW:");     scanf("%d",&row); row--;
    
    int mat1[100][100], mat2[100][100];
    
    printf("enter items in matrix 1: \n");
    for(int i=0; i<=row; i++){
        for(int j=0; j<=col;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    
    printf("enter items in matrix 2: \n");
    for(int i=0; i<=row; i++){
        for(int j=0; j<=col;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    
    mat_mul(mat1, mat2,col, row);
    return 0;
}

    //      A   B     E   F       AE+BG   AF+GH
    //             *          =   
    //      C   D     G   H       CE+DG   CF+DH