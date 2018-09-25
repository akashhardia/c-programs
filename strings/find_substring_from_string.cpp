#include<stdio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main(){
    char str[1000], substr[1000];
    printf("enter a string: \n");
    gets(str);
    
    printf("enter a string to search: \n");
    gets(substr);
    
    int lengthsub,lengthstr;
    
    // lengthsub = 0;                                      // substring length
    // while(substr[lengthsub]!='\0'){
    //     lengthsub++;
    // }
    
    lengthstr = str.length();
    lengthsub = substr.length();
    // lengthstr = 0;                                      // string length
    // while(str[lengthstr]!='\0'){
    //     lengthstr++;
    // }
    
    int found = 0;
    for(int i = 0; i<lengthstr; i++){
        int j = 0, flag = 0;
        while((substr[j] == str[i] && i<lengthstr && j<lengthsub)){
            flag += 1;
            i++;j++;
        }
        if(flag == lengthsub){
            found = 1;
            break;
        }
    }
    if(found == 1){
        printf("string found");
    }else{
        printf("not found");
    }
    
    return 0;
}