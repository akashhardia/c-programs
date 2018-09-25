// prints the source code on console

#include<stdio.h>

int main(){
    FILE *fp;
    char ch;
    
    fp = fopen("94_print_source_code.cpp","r");
    
    do{
        ch = getc(fp);
        putchar(ch);
    }while(ch!=EOF);
    
    return 0;
}
