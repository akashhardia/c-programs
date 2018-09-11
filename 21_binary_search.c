#include<stdio.h>

int main(){
    int arr[100], length,item;
    printf("enter no. of items in array:"); // length of array
    scanf("%d",&length);
    
    printf("enter elements in sorted order in array: ");      // taking elements in array
    for(int i=0; i<length;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("enter item to search: ");       // item to search
    scanf("%d",&item);
    
    int pos = 0;
    int begin = 0, end = --length, middle = length/2;
   
       for(int i=0; begin<=end;i++){
           if(arr[middle]==item){
               pos = ++middle;
               break;
           }
           else if(item<arr[middle]){
               end=--middle;
               middle = (begin+end)/2;
           }
           else{
               begin = ++middle;
               middle = (begin+end)/2;
           }
       }
   
    if(pos!=0)
        printf("the position is %d", pos);
    else
        printf("element not found");
    
    return 0;
}