//                  QUICK Sort
// divide and conquer

#include<stdio.h>

using namespace std;                        // only c++

int partition(int arr[100], int pivot, int high){   // setting first index as pivot
    int i,j;                                          
    i=pivot;                          
    j=high;
    
    while(i<j){     // indexes
        while(arr[i]<=arr[pivot])             
            i++;
        while(arr[j]>arr[pivot])
            j--;
        if(i<j){                        
            int temp = arr[i];                      // swap i and j elements
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[pivot];                          // swap j and pivot elements
    arr[pivot] = arr[j];
    arr[j] = temp;
    return j;
}


void Quick(int arr[100], int low, int high){
    int m;
    if(low<high){
        m = partition(arr,low,high);
        Quick(arr, low, m-1);
        Quick(arr, m+1, high);
    }
}

int main(){
    int size, arr[100];
    printf("enter no of elements in arrays:");   
    scanf("%d",&size);          
    
    printf("enter elements in array: \n");
    
    for(int i=0; i<size;i++){
        scanf("%d",&arr[i]);                        // input
    }
    
    Quick(arr,0,size-1);
    
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);                      // print
    }
    
    return 0;
}
    
//  4   5   2   3   1


// 1st item as pivot

// step1: set i and j           (if i<=pivot, incre i      if j>pivot, decre j)
// step2: i<j index     swap i and j element
// step3: j>i  index     swap j and pivot element


//O(nlogn)      average case
//O(n^2)        worst


// it sorts whole array by -  every time pivot(1st item) is placed at its correct position and array is broken into two parts