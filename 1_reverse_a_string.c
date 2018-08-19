#include<stdio.h>
int main(){
    char str[1000],rev[1000];
    
    printf("enter a string: ");
    gets(str);        //get string from user
    
    int count = 0;
    while(str[count] != '\0'){
        count++;
    }
    
    int end, begin;
    end = count -1;
    for(begin=0; begin<count; begin++){
        rev[begin] = str[end];
        end--;
    }
    
    puts(rev);        // print reversed string
    
}
