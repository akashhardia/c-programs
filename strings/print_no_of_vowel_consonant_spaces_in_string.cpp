#include<stdio.h>

int main(){
    int digits, spaces, consonants, vowels;
    digits = spaces = consonants = vowels = 0;
    
    char str[100];
    gets(str);
    
    int length = 0;
    while(str[length]!='\0')              // length of string
        length++;
        
    for(int i=0; i<length; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            vowels++;
            
        else if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
            consonants++;
            
        else if(str[i]>='0' && str[i]<='9')
            digits++;
        
        else if(str[i]==' ')
            spaces++;
    }
    
    printf(" spaces are: %d\n digits are: %d\n vowels are %d\n consonants are: %d\n", spaces,digits,vowels,consonants);
    
    
    return 0;
}