#include<stdio.h>

void copy_string(char* source, char* target){
    
    while(*source){
        *target = *source;                      // copying values
        target++;                               // incrementing addresses
        source++;
    }
    *target='\0';                               // adding \0 at the end
}


int main(){
    char source[100], target[100];
    printf("enter string: ");
    gets(source);
    
    copy_string(source, target);
    
    printf("copied string is :");
    puts(target);
    return 0;
}