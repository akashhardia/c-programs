#include<stdio.h>

int main(){
    int year;
    printf("enter the year: ");
    scanf("%d",&year);
    
    if(year%100==0){                            // if divisible by 100
        if(year%400==0)                                         // leap if divisible by 400
            printf("it is a leap year");
        else                                                    // else not a leap year
            printf("not a leap year");
    }
    else if(year%4==0)                          // leap if divisible by 4
        printf("it is a leap year");
    else                                        // not a leap year
        printf("not a leap year");
}