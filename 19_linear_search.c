#include<stdio.h>

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
    
    int pos=0;
    for(int i=0;i<=length;i++){
        if(arr[i]==item){
            pos = ++i;
            break;
        }
    }
    
    if(pos!=0)
        printf("the position is %d", pos);
    else
        printf("item not found");
    
    return 0;
}