//                  QUICK Sort
// divide and conquer

#include<stdio.h>
#include<stdlib.h>                          // exit()

int partition(int arr[100], int low, int high){
    int pivot,i,j;
    pivot = arr[low];
    i=low;
    j=high;
    while(i<=j){
        while(arr[i]<=pivot)
            i++;
        while(arr[j]>=pivot)
            j++;
        if(i<=j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[low];
            arr[low] = arr[j];
            arr[j] = temp;
    return j;
}
    
    


int Quick(int arr[100], int low, int high){
    int m;
    if(low<high){
        m = partition(arr,low,high);
        Quick(arr, low, m-1);
        Quick(arr, m+1, high);
    }
}

using namespace std;                        // only c++

int main(){
    int size, arr[100];
    printf("enter no of elements in arrays:");    scanf("%d",&size); size--;
    
    printf("enter elements: \n");
    for(int i=0;i<=size;i++){
        scanf("%d ", &arr[i]);
    }
    
    Quick(arr,0,size);
    
    for(int i=0;i<=size;i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}
    
//  1 2 3 4 5
//  6 7 8 9 0
//sum:
//  7 9 11 13 5