#include<stdio.h>
#include<stdlib.h>                          // exit()

using namespace std;                        // only c++

void transpose(int arr[100][100],int temp[100][100], int row, int col){
    for(int i=0;i<=row;i++){
        for(int j=0;j<=col;j++){
            temp[i][j] = arr[j][i];
        }
    }
}

int main(){
    int arr[100][100],temp[100][100], row,col;
    printf("enter no..of row:");    scanf("%d",&row); row--;
    printf("enter no..of col:");    scanf("%d",&col); col--;
    
    for(int i=0;i<=row;i++){
        for(int j=0;j<=col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    transpose(arr,temp,row,col);
    
    for(int i=0;i<=row;i++){                    // if transpose and original matrix is same, then matrix is symmetric
        for(int j=0;j<=col;j++){
            if(arr[i][j]!=temp[i][j]){
                printf("not symmetric");
                exit(0);
            }
        }
    }
    
    printf("they are symmetric");
    return 0;
}
    
// Input : 1 2 3
//         2 1 4
//         3 4 3
// Output : Yes
