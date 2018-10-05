#include<stdio.h>
#include<iostream>

class Example{
    public:
        Example(){                                      // default constructor
            printf("Default constructor\n");    
        }
        
        Example(int a){                                 // parameterised constructor
            printf("Parameteerised constructor %d\n",a);
        }
        
        
        
        
        ~Example(){                                     // destructor   - called when scope of object ends
            printf("destructor called\n");
        }
};

int main(){
    Example obj;                // default
    Example obj1(2);             // parameterised
    return 0;
}