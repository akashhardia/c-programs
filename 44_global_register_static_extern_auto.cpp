#include<stdio.h>

using namespace std;

int z = 10;                     // global (default value = 0)

int main(){
    auto int x;                 // int x;          works well
    
    static int x;               // they preserve their values even b/w function calls, default value =0
    
    register int x=5;           // similar to auto, but uses register if they are free 
    
    extern int z;               // compiler finds the value of z outside the main() which is 10
    
  
    return 0;
}

//          https://www.geeksforgeeks.org/storage-classes-in-c/