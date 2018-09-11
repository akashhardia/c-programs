// c++

#include<stdio.h>
#include<stdlib.h>      // exit()

using namespace std;                        // only c++

int main(){
    char str1[1000],str2[1000];
    printf("enter string 1 and 2: \n");
    
    gets(str1);
    gets(str2);
    
    int length1 = 0, length2 = 0;
    while(str1[length1]!='\0'){
        length1++;
    }
    while(str2[length2]!='\0'){
        length2++;
    }
    
    
    if(length1!=length2){                   // check their lengths - exit
        printf("not identical");
        exit(0);
    }
    
    else if(length1 == length2){            
        int temp=0;
        while(length1!=temp){
            if(str1[temp]!=str2[temp]){     // check individual characters - exit
                printf("not identical");
                exit(0);
            }
            temp++;
        }
        printf("they are identical");
    }
    
    return 0;
}

//      akash
//      akash
//      identical