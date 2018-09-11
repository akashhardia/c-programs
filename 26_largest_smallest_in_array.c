#include<stdio.h>

int * selection_sort(int[], int);

int main(){
    int length, arr[100],*p;
    printf("enter number of elements in an array: ");
    scanf("%d",&length);
    length--;
    
    for(int i=0;i<=length; i++){
        scanf("%d",&arr[i]);
    }
    
    p = selection_sort(arr, length);
    
    int smallest = *p;
    int largest = *(p+length);
    printf("smallest is: %d",smallest);
    printf("largest is %d", largest);
    
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
    return arr;             // function cannot return an array, we return its base address
}