#include<stdio.h>

void insertion_sort(int[],int);

int main(){
    int length, arr[100],*p;
    printf("enter number of elements in an array: ");
    scanf("%d",&length);
    length--;
    
    for(int i=0;i<=length; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("sorting in ascending order.\n");
    //p = insertion_sort(arr, length);
    insertion_sort(arr,length);
    for(int i=0;i<=length; i++){
        printf("%d",arr[i]);                // value at
    }

    return 0;
}


void insertion_sort(int arr[], int length){         // returning int *
    int temp;
    for(int i=1; i<=length; i++){                       // starting with i=1 increasing 
        temp = arr[i];
        
        int j=i-1;                                         // j=i-1 decreasing
        while(j>=0 && arr[j]>temp){                // if greator element is found than temp,
            arr[j+1]=arr[j];                    // shift it ahead
            j--;
        }
        arr[j+1]=temp;
    }
    
    
}