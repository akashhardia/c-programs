#include<stdio.h>
int powerFinder(int, int);

int main(){
    int number, power;   
    printf("number: ");     scanf("%d",&number);
    printf("power: ");      scanf("%d",&power);
    
    printf("%d",powerFinder(number, power));
    return 0;
}

int powerFinder(int number, int power){
    if(power==0){                               // stop condition
        return 1;
    }
    else{
        number *= number;                       // multiplying number with itself
        powerFinder(number,power-1);            // working as a loop(calling itself with decresed value)
        return number;
    }
}