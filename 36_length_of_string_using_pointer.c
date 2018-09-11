#include<stdio.h>

int string_length(char* str){
    
    int length=0;
    while(*str){
        length++;
        str++;
    }
    return length;
}


int main(){
    char str[100];
    printf("enter string: ");
    gets(str);
    
    printf("%d is the length",string_length(str));
}