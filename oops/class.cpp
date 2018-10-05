#include<stdio.h>
#include<iostream>

class Example{
    //by default - everything is private (data hiding)
    public:
        int a;
        void hello(){
            printf("hello");
        }
        void message();                 // declaration
};

void Example::message(){                // member function outside the class 
    printf("Hi ");
}


int main(){
    Example obj;
    obj.message();
    
    obj.a = 5;
    printf("%d",obj.a);
    return 0;
}