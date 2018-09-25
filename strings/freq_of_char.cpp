#include<stdio.h>

int main(){
    char str[100];
    gets(str);
    
    int size = 0;
    while(str[size]!='\0')
        size++;
    
    char temp[100];
    int z=0;
    for(int i=0;i<size;i++){
        int flag = 0;
        for(int j=i+1;j<size;j++){
            if(str[i]==str[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            temp[z++] = str[i];                   // putting distinct items in temp
            temp[z] = '\0';
        }
    }
    
    puts(temp);
    
    int tempsize = 0;
    while(temp[tempsize]!='\0')                 // length of temp
        tempsize++;
    
    for(int i=0;i<tempsize;i++){
        int count = 0;
        for(int j=0; str[j]!='\0';j++){         // freq count
            if(temp[i]==str[j])
                count++;
        }
        printf("freq of %c is %d\n",temp[i],count);
    }
    
    return 0;
}

//     akash    ->  kash

// k = 1
// a = 2
// s = 2
// h = 1