#include<stdio.h>

int main(){
    int z;
    scanf("%d",&z);
    for(int i=1;i<=z;i++){
        if(i%3==0){
            if(i%5==0){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}