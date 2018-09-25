// subtract without - operator

#include<stdio.h>

int main(){
   int num1, num2;
    
   printf("Enter two numbers: ");
   scanf("%d%d", &num1, &num2);
   
   int sub;
   
   sub = num1 + ~num2 + 1;
   
   printf("output is: %d", sub);
    
    
    return 0;
}


// to find subtraction, add 2s compliment of subtrahend to minuend 

//       10   1010         1010                             minuend
//        5   0101->       1010  (1s compliment)            subtrahend
//                         0001  (2s compliment)  
//                         -----
//        5                0101