#include<stdio.h>
void pyramid1(int);
void pyramid2(int);
void pyramid3(int);
void pyramid4(int);
void pyramid5(int);

int main(){
    int number;
    printf("enter the number: ");   scanf("%d",&number);
    pyramid1(number);               printf("\n");
    pyramid2(number);               printf("\n");
    pyramid3(number);               printf("\n");
    pyramid4(number);               printf("\n");
    pyramid5(number);               printf("\n");
    return 0;
}

void pyramid1(int number){                  // if number is 4
    for(int row=1; row<=number; row++){                 // row loop runs 4 times (4 rows)
        for(int col=1;col<=number;col++){               // col loop runs 4 times (4 columns)
            if(col<=number-row)
                printf(" ");
            else
                printf("%d",row);
        }
        printf("\n");
    }
}
// pyramid1
//      1
//     22
//    333
//   4444

void pyramid2(int number){                                  //if number is 4
    for(int row=1; row<=number; row++){                             // row runs 4 times (4 rows)
        for(int col=1; col<=(2*number-1); col++){                   // col runs 7 times (7 columns are there)
            if(col<=number-row)
                printf(" ");
            else if(col>=number-row && col<number+row){             // print a number only when column number is b/w:
                printf("%d",row);                                   //      =number-row && <number+row
            }
        }
        printf("\n");           // after each row -  next line
    }
}
// pyramid2
//      1
//     222
//    33333
//   4444444

void pyramid3(int number){
    for(int row=1; row<=number; row++){
        for(int col=1; col<=number;col++){
            if(col<=number-row){
                printf(" ");
            }
            else if(col>=number-row && col<number+row){
                printf("%d ", row);
            }
        }
        printf("\n");
    }
}
//pyramid3
//    1
//   2 2
//  3 3 3
// 4 4 4 4

void pyramid4(int number){
    int count=1;
    for(int row=1; row<=number; row++){
        for(int col=1; col<=number;col++){
            if(col<=number-row){
                printf("  ");
            }else if(col>=number-row && col<number+row){
                printf("%d   ",count++);
            }
        }
        printf("\n");
    }
}
// pyramid4
//       1
//     2   3
//   4   5   6
// 7   8   9   10


void pyramid5(int number){
    int count=1;
    for(int row=1; row<=number; row++){
        for(int col=1; col<=2*number-1;col++){
            
            if(col<=row*2-1){
                if(col%2==0){
                    printf("*");
                }else{
                    printf("%d",count++);
                }
            }
        }
        printf("\n");
    }
}
// pyramid5
// 1
// 2*3
// 4*5*6
// 7*8*9*10
