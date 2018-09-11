#include<stdio.h>
void insert();
void del();
void replace();

int main(){
    int ch;
    printf("enter your choice: \n");
    printf("1 To insert a sub-string in to given main string from a given position.\n");
    printf("2 To delete n Characters from a given position in a given string.\n");
    printf("3 To replace a character of string either from beginning or ending or at a specified location.\n");
    scanf("%d",&ch);
    switch(ch){
        case 1: {
            insert();
            break;
        }
        case 2: {
            del();
            break;
        }
        case 3: {
            replace();
            break;
        }
    }
    return 0;
}

void insert(){
    char mainstr[1000],substr[1000];
    int pos;
    printf("enter the main string: ");    
    scanf("%d\n");                          // it solves the problem of gets not reading string,because other scanf leave the \n 
                                            // on buffer, so gets reads \n and does not read our string
    gets(mainstr);      
    printf("enter substring: ");          
    gets(substr);
    
    printf("starting with zero, enter a position: ");         scanf("%d",&pos);       
    
    int i = pos, j=0;
    char temp[1000];
    while(mainstr[j]!='\0'){                            // shifting items from main at pos to temp
        temp[j] = mainstr[i];
        i++;j++;
    }
    
    j=0;
    while(substr[j]!='\0'){                             // appending substring in main at the end
        mainstr[pos] = substr[j];
        pos++; j++;
    }
    
    j=0;
    while(temp[j]!='\0'){                               // appending temp in main at the end
        mainstr[pos] = temp[j];
        j++; pos++;
    }
    mainstr[pos] = '\0';    // we made the string ourselves, that's y it doesn't end with '\0'
    
    printf("%s",mainstr);
}

void del(){
    int pos,n;
    char mainstr[1000];
    printf("enter the string: ");
    scanf("%d\n");
    gets(mainstr);
    printf("starting with zero, enter the position from where you want to delete: ");
    scanf("%d",&pos);
    printf("no. of items to delete: ");
    scanf("%d",&n);
    
    char temp[1000];
    int j=pos+n,i=0;
    while(mainstr[j] != '\0'){
        temp[i] = mainstr[j];
        i++;j++;
    }
    
    i=0;
    while(mainstr[pos] != '\0'){
        mainstr[pos] = temp[i];
        i++; pos++;
    }
    mainstr[pos] = '\0';
    
    printf("New string is: %s", mainstr);
}

void replace(){
    char mainstr[1000], substr;
    int pos;
    printf("enter main string: ");
    scanf("%d\n");
    gets(mainstr);
    printf("starting with zero, enter the position: ");
    scanf("%d",&pos);
    printf("enter the character: ");
    scanf("%d\n");
    scanf("%c",&substr);
    
    int count=0;
    while(mainstr[count]!='\0'){
        count++;
    }
    count--;
    
    mainstr[pos++] = substr;
    mainstr[pos] = '\0';
    printf("The new string is: %s", mainstr);
}