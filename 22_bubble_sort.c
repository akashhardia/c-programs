#include<stdio.h>

void bubble_sort(int[],int);

int main(){
    int length, arr[100];
    printf("enter number of elements in an array: ");
    scanf("%d",&length);
    length--;
    
    for(int i=0;i<=length; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("sorting in ascending order.\n");
    bubble_sort(arr, length);
    
    for(int i=0;i<=length; i++){
        printf("%d",arr[i]);                
    }

    return 0;
}

void bubble_sort(int arr[], int length){
    int temp,i=0;
    for(int i = 0;i<length;i++){        // we dont use i anywhere, it is just for looping n times
        
        for(int j = 0;j<length;j++){
            
            if(arr[j]>arr[j+1]){
                arr[j]   = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j]   = arr[j] - arr[j+1];
            }
        }
    }
}

// Blind sort/ Bubble

// checking adjacent elements n-1 times -> n times
// 4    2    1    3    5
// j   j+1
//      j   j+1
//           j   j+1 
//                j   j+1       5-1 comparisons = 4 comparisons b/w (j & j+1)

//                              means total 4*5 = 20 comparisons to sort
