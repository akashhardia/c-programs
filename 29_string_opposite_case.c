#include<stdio.h>

int main(){
    char str[1000];
    printf("enter a string to change its case");
    gets(str);                  // getting the string
    
    int count=0;
    char ch;
    while(str[count]!='\0'){
        ch = str[count];
        if(ch>='A' && ch<='Z')
            str[count] = str[count] + 32;
        else if(ch>='a' && ch<='z')
            str[count] = str[count] - 32;
        ++count;
    }
    
    puts(str);                  //printing the string
    
    return 0;
}