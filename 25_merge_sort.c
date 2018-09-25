#include<stdio.h>

void merge_sort(int[],int, int);
void merge(int[], int, int, int);
void print_arr(int[], int);

int main(){
    int length, arr[100],*p;
    printf("enter number of elements in an array: ");
    scanf("%d",&length);
    length;
    
    for(int i=0;i<length; i++){                         // input
        scanf("%d",&arr[i]);
    }
    
    printf("sorting in ascending order.\n");
    
    int low = 0, high = length-1, mid;
    merge_sort(arr, low, high);
    
    print_arr(arr,length);                            // print

    return 0;
}

void merge_sort(int arr[], int low, int high){   
    int mid;
    if(low<high){
        mid=low+high/2;
        merge_sort(arr,low, mid);                       // divide
        merge_sort(arr,mid+1,high);                     // divide
        merge(arr, low, high, mid);                     // merge
    }
}
 
void merge(int arr[], int low, int high, int mid){
    int i,j,k;
    int temp[100];
    i=low;
    j=mid+1;
    k=0;
    while(i<=mid && j<=high){                       // run this code, until any one is completely traversed
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
        }
        else{
            temp[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid){                                  // copy the left array in temp, until it is traversed completely
        temp[k]=arr[i];
        k++; i++;
    }
    while(j<=high){                                 // copy the right array in temp, until it is traversed completely
        temp[k]=arr[j];
        k++; j++;
    }
    
    for(i=low;i<=high;i++){                                 // copy the temp array in 'original array'
        arr[i]=temp[i];
    }
}

void print_arr(int arr[], int length){
    for(int i=0;i<length;i++){
        printf("%d ", arr[i]);
    }
}


// merging two sorted arrays:                                       temp
//      1   4   5   7               2   3   6   9               _   _   _
//      i                           j                           k
//                          1<2                                                        
//      1   4   5   7               2   3   6   9               1   _   _
//          i                       j                               k
//
//                          2<4
//      1   4   5   7               2   3   6   9               1   2   _
//          i                           j                               k
//
//  i<j (element)    put i in temp, i++
//  j>i (element)    put j in temp, j++
//
//  if, any one of the array is done, copy the other array in temp as it is.