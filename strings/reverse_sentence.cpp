#include<stdio.h>

int main(){
    char str[100];
    gets(str);
    
    int length = 0;
    while(str[length]!='\0'){            // length of string
        length++;
    }
        
    char temp[100], rev[100], temp1[100];
    int z;
    for(int i = 0; i<length; i++){
        z = 0; 
        while(str[i]!=' '){
            temp[z++] = str[i++];               // putting a word in temp
            temp[z] = '\0';
        }
            
        z=0;
        if(rev[0] == '\0'){                                 // if 'rev' is empty -  means 1st word
            while(temp[z]!='\0'){
                rev[z++] = temp[z];
                rev[z] = '\0';
            }
        }
        else{
            z=0;
            while(rev[z]!='\0'){                 // put words form 'rev' to 'temp1'
                temp1[z++] = rev[z];
                temp1[z] = '\0';
            }
            
            int t=0;
            while(temp[t]!='\0'){                // put word from 'temp' to 'rev' 
                rev[t++] = temp[t];
                rev[t] = '\0';
            }
            
            t=0;    
            while(temp1[t]!='\0'){               // append the words from 'temp1' to 'rev' at the end
                rev[z++] = temp1[t];
                rev[z] = '\0';
            }
        }
    }
    
    printf("reversed sentence: %s",rev);
    return 0;
}