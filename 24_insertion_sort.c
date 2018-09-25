#include<stdio.h>

void insertion_sort(int[],int);

int main(){
    int length, arr[100],*p;
    printf("enter number of elements in an array: ");
    scanf("%d",&length);
    length;
    
    for(int i=0;i<length; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("sorting in ascending order.\n");
    
    insertion_sort(arr,length);
    
    for(int i=0;i<length; i++){
        printf("%d",arr[i]);                // print
    }

    return 0;
}


void insertion_sort(int arr[], int length){         
    int temp;
    for(int i=1; i<length; i++){                        // starting with i=1 increasing 
        temp = arr[i];
        int j;
        for(j=i-1 ; j>=0 && arr[j]>temp ; j--){         // if large, shift to right
            arr[j+1] = arr[j];                          
        }
        arr[j+1] = temp;                                // put the item at correct position
    }
}

//      2   4   1   6   7
//      j   i    
//         temp

//      2   4   1   6   7
//     j-1  j   i    
//             temp


// arrray is divided in two arrays(logical)
// each item from unsorted array is placed at its correct position in sorted array

//              outer array         1       to   last element
//              inneer              i-1     to    0

//      we need to shift items in right in order to place it to corect position
//      thats y we use 'temp'

//              if( a[j] > temp )
//                  a[j+1] = arr[j]         this is shifting