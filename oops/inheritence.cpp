// https://www.geeksforgeeks.org/inheritance-in-c/
#include<stdio.h>

class A  
{ 
public: 
    int x; 
protected: 
    int y; 
private: 
    int z; 
}; 
  
class B : public A 
{ 
    // x is public 
    // y is protected 
    // z is not accessible from B 
}; 
  
class C : A 
{ 
    // x is protected 
    // y is protected 
    // z is not accessible from C 
}; 
  
class D : private A    // 'private' is default for classes 
{ 
    // x is private 
    // y is private 
    // z is not accessible from D 
}; 


int main(){
    C obj;
    obj.y=1;
    return 0;
}