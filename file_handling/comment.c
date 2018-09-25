#include<stdio.h>

int main(){
    FILE *read;
    FILE *write;
    char ch, nextch;
    if(read = fopen("file.txt","r")){
        if(write = fopen("newfile.txt","w")){
            nextch = fgetc (read);
            while (nextch != EOF){
                ch = fgetc(read);
                nextch = fgetc(read);
                if(feof(read))
                    break;
                else if(ch == "/" && nextch == "*"){
                    ch = nextch;
                    nextch = fgetc(read);
                    while(ch == "*" && nextch == "/"){
                        ch = nextch;
                        nextch = fgetc(read);
                    }
                }
                else if(ch == "/" && nextch == "/"){
                    
                    while(!(nextch == "\n")){
                        ch = nextch;
                        nextch = fgetc(read);
                        continue;
                    }
                }
                putc(ch,write);
                
            }
            
        }
    }
    fclose(read);
    fclose(write);
}