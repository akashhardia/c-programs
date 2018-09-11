// c++

#include<stdio.h>
#include<math.h>                            // pow(n, power)

using namespace std;                        // only c++

// int power_calc(int number, int power){
//     int result=1;
//     while(power>0){
//         result= result * number;
//         power++;
//     }
//     return result;
// }

int main(){
    int number;
    printf("enter number: ");
    scanf("%d", &number);                      
    
    int temp = number;
    
    int length=0;
    while(temp>0){
        temp = temp/10;
        length++;
    }
    
    temp = number;
    int sum=0;
    while(temp>0){
        sum = sum + pow(temp%10,length);
        temp = temp/10;
    }
    
    if(sum==number)
        printf("it is armstrong number");
    else
        printf("not an armstring numbeer");
}


// armstrong number:
// 371 = 3^3 + 7^7 + 1^3