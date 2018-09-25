#include<stdio.h>

int main(){
    char str[1000];
    printf("enter a string: ");
    
    gets(str);                              // get  a string form user
    
    int count= 0 ;
    while(str[count] != '\0'){              // getting the length of string
        count++;
    }
    
    int mid = count/2, begin, end = count - 1;       
    for(begin = 0; begin<mid; begin++){                 //comparing 1st item with last 
        if(str[begin] != str[end]){
            printf("not a palindrome");
            break;
        }
        end--;
    }
    if(begin == mid){
        printf("it is a pallindrome");   
    }
    return 0;
}