#include<stdio.h>

int linearSearch(int[], int, int, int);

int main(){
    int arr[100], length,item,pos=0;;
    printf("enter no. of items in array:"); // length of array
    scanf("%d",&length);
    length--;
    
    printf("enter elements in array");      // taking elements in array
    for(int i=0; i<=length;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("enter item to search: ");       // item to search
    scanf("%d",&item);
    
    
    pos = linearSearch(arr,item,pos,length);
    
    if(pos!=0)
        printf("The position is: %d", pos);
    else
        printf("element not found");
        
    return 0;
}

int linearSearch(int arr[],int item,int pos, int length){
    if(arr[pos]==item){                         // if item is found, return its position
        return ++pos;
    }
    if(pos == length){                          // if full array is checked, & item not found, return 0
        return 0;
    }
    return (pos = linearSearch(arr,item,pos+1,length));     // recursively call this with (pos+1) and store its pos
    
}