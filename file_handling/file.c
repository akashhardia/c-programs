#include<stdio.h>
#include<string.h>

int main(){
    char data[50];
    
    // FILE *write = openFile("file.txt","w");
    // fputs("hey my name is akash",write);
    // printf("data written");
    // fclose(write);
    
    printf("appending data\n");
    FILE *append = fopen("file.txt","a");
    // while(fgets(data,50,read) != NULL)
    //     printf("%s",data);
    
    fputs("new data entry",append);
    printf("data appended");
    
}