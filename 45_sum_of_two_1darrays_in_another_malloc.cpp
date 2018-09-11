#include<stdio.h>
#include<stdlib.h>                          // exit()

using namespace std;                        // only c++

int main(){
    int size;
    printf("enter no of elements in arrays:");    scanf("%d",&size); size--;
    
    int *a,*b,*c;                                   // pointers to 3 arrays
    a = (int*)malloc(size*sizeof(int));
    b = (int*)malloc(size*sizeof(int));
    c = (int*)malloc(size*sizeof(int));
    
    printf("enter elements in array1:\n");
    for(int i=0;i<=size;i++){
        scanf("%d", a+i);                                   //    a+i means address
    }                                                       //  *(a+i) means value at that address
    
    printf("enter elements in array2:\n");
    for(int i=0;i<=size;i++){
        scanf("%d", b+i);
    }
    
    for(int i=0;i<=size;i++){
        *(c+i) = *(b+i) + *(a+i);                       //sum
    }
    
    printf("The third array is: \n");
    for(int i=0;i<=size;i++){
        printf("%d ", *(c+i));
    }
    
    return 0;
}
    
//  1 2 3 4 5
//  6 7 8 9 0
//sum:
//  7 9 11 13 5