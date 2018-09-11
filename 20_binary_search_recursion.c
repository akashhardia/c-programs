#include<stdio.h>

int binary_search(int[], int, int, int);

int main(){
    int arr[100], length,item;
    printf("enter no. of items in array:"); // length of array
    scanf("%d",&length);
    length--;
    
    printf("enter elements in array: ");      // taking elements in array
    for(int i=0; i<=length;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("enter item to search: ");       // item to search
    scanf("%d",&item);
    
    int begin=0,end=--length;
    int pos = 0;
    pos = binary_search(arr,item,begin,end);
    
    if(pos!=0)
        printf("the position is %d", pos);
    else
        printf("element not found");
    return 0;
}

int binary_search(int arr[], int item,int begin, int end){
    int middle= (begin+end)/2;
    if(begin>end)
        return 0;
    
    else if(arr[middle]==item)
        return --middle;
    else if(arr[middle]<item)
        end = ++middle;
    else
        begin = ++middle;  
        
    binary_search(arr,item,begin,end);
}