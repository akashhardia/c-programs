#include<stdio.h>
void pyramid1(int);
void pyramid2(int);

int main(){
    int number;
    printf("enter the number: ");   scanf("%d",&number);
    pyramid1(number);               printf("\n");
    pyramid2(number);               printf("\n");
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




