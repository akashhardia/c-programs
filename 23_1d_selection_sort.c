// selection sort

#include<stdio.h>

int* selection_sort(int[],int);

int main(){
    int length, arr[100],*p;
    printf("enter number of elements in an array: ");
    scanf("%d",&length);
    length--;
    
    for(int i=0;i<=length; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("sorting in ascending order.\n");
    p = selection_sort(arr, length);
    
    for(int i=0;i<=length; i++){
        printf("%d",*(p+i));                // value at
    }

    return 0;
}

int* selection_sort(int arr[], int length){         // returning int *
    int smallest,temp;
    
    for(int i=0; i<=length; i++){                   // loop - smallest
        smallest = i;
        for(int j=i+1; j<=length;j++){              // loop - scan
            if(arr[j]<arr[smallest]){
                temp = arr[j];
                arr[j] = arr[smallest];
                arr[smallest] = temp;
            }
        }
    }
    // for(int i=0;i<=length; i++){
    //     printf("%d",arr[i]);
    // }
    return arr;             // function cannot return an array, we return its base address
}