// selection sort

#include<stdio.h>

int* selection_sort(int[],int);

int main(){
    int length, arr[100],*p;
    printf("enter number of elements in an array: ");
    scanf("%d",&length);
    
    for(int i=0;i<length; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("sorting in ascending order.\n");
    p = selection_sort(arr, length);
    
    for(int i=0;i<length; i++){
        printf("%d",*(p+i));                // value at
    }

    return 0;
}

int* selection_sort(int arr[], int length){         // returning int *
    
    for(int i=0; i<length-1 ; i++){
        int smallest = i;
        
        for(int j = i+1; j<length ; j++){
            if(arr[j]<arr[smallest]){
                arr[j]          = arr[j] + arr[smallest];
                arr[smallest]   = arr[j] - arr[smallest];
                arr[j]          = arr[j] - arr[smallest];
            }
        }
    }
    
    return arr;             // function cannot return an array, we return its base address
}


// from one end the array gets sorted

//   3    4    1    7    2
//   s    j
//   s         j
//   s              j
//   s                   j


//   1    4    3    7    2
//        s    j
//        s         j
//        s              j


//   1    2    4    7    3
//             s    j
//             s         j


//   1    2    3    7    4
//                  s    j


//   1    2    3    4    7      sorted





// total items = 5
//                          outer loop - 4 times            0    -  length-1
//                          inner                           i+1  -  length