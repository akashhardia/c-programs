#include<stdio.h>

void merge_sort(int[],int, int);
void merge(int[], int, int, int);
void print_arr(int[], int);

int main(){
    int length, arr[100],*p;
    printf("enter number of elements in an array: ");
    scanf("%d",&length);
    length--;
    
    for(int i=0;i<=length; i++){
        scanf("%d",&arr[i]);
    }
    
    int low, high, mid;
    low=0;
    high=length;
    printf("sorting in ascending order.\n");
    merge_sort(arr, low, high);
    
    print_arr(arr,length);

    return 0;
}

void merge_sort(int arr[], int low, int high){   
    int mid;
    if(low<high){
        mid=low+high/2;
        merge_sort(arr,low, mid);
        merge_sort(arr,mid+1,high);
        merge(arr, low, high, mid);
    }
}
 
void merge(int arr[], int low, int high, int mid){
    int i,j,k;
    int temp[100];
    i=low;
    j=mid+1;
    k=0;
    while(i<=mid && j<=high){
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
    while(i<=mid){
        temp[k]=arr[i];
        k++; i++;
    }
    while(j<=high){
        temp[k]=arr[j];
        k++; j++;
    }
    
    for(i=low;i<=high;i++){
        arr[i]=temp[i];
    }
}

void print_arr(int arr[], int length){
    for(int i=0;i<=length;i++){
        printf("%d ", arr[i]);
    }
}