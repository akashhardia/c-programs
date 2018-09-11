#include<stdio.h>

int* bubble_sort(int[],int);

int main(){
    int length, arr[100],*p;
    printf("enter number of elements in an array: ");
    scanf("%d",&length);
    length--;
    
    for(int i=0;i<=length; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("sorting in ascending order.\n");
    p = bubble_sort(arr, length);
    
    for(int i=0;i<=length; i++){
        printf("%d",*(p+i));                // value at
    }

    return 0;
}

int * bubble_sort(int arr[], int length){
    int temp,i=0;
    while(i<=length){                       // we don't use value of i anywhere, it is just for incrementing passes
            for(int j=1;j<=length;j++){
                if(arr[j]<arr[j-1]){        // comparing j with previous element
                    temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                }
            }
        i++;
    }
    
    return arr;
}