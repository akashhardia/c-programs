#include<stdio.h>

int main(){
    int arr[20], length;
    
    scanf("%d", &length);
    
    printf("enter elements:");
    for(int i=0;i<length;i++){
        scanf("%d",&arr[i]);   
    }                               // array input
    
    int asc = 1, desc=1;

    for(int i=1;i<length;i++){               //asc
        if(arr[i]>arr[i-1])
            continue;
        else{
            asc=0;
            break;
        }
    }
    
for(int i=length-2;i>=0;i--){            // desc
        if(arr[i]>arr[i+1])
            continue;
        else{
            desc = 0;
            break;
        }
    }       
    
    if(asc || desc)
        printf("true");
    else
        printf("false");
    
    
    return 0;
}