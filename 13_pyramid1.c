#include<stdio.h>
void pyramid1(int);
void pyramid2(int);
void pyramid3(int);
void pyramid4(int);
void pyramid5(int);
void pyramid6(int);
void pyramid7(int);

int main(){
    int number;
    printf("enter the number: ");   scanf("%d",&number);
    pyramid1(number);               printf("\n");
    pyramid2(number);               printf("\n");
    pyramid3(number);               printf("\n");
    pyramid4(number);               printf("\n");
    pyramid5(number);               printf("\n");
    pyramid6(number);               printf("\n");
    pyramid7(number);               printf("\n");
    return 0;
}

void pyramid1(int number){                  // if number is 4
    for(int row=1; row<=number; row++){                 // row loop runs 4 times (4 rows)
        for(int col=1;col<=number;col++){
            if(col<=number-row)
                printf(" ");
            else
                printf("%d",row);
        }
        printf("\n");
    }
}
// pyramid1
//      1 2 3 4
// 1          1
// 2        2 2
// 3      3 3 3
// 4    4 4 4 4

void pyramid2(int number){                                  //if number is 4
    for(int row=1; row<=number; row++){                             
        for(int col=1;col<=number;col++){               // spaces as well
            if(col<=number-row)
                printf(" ");
            else
                printf("%d",row);
        }
        for(int col=1;col<=row-1;col++){                // not runinng for spaces
            printf("%d",row);
        }
        printf("\n");           
    }
}
// pyramid2
//      1234123
// 1       1
// 2      222
// 3     33333
// 4    4444444

void pyramid3(int number){
    for(int row=1; row<=number; row++){
        for(int col=1;col<=number;col++){
            if(col<=number-row)
                printf(" ");
            else
                printf("%d ", row);                 // with space
        }
        printf("\n");
    }
}
//pyramid3
//   1234
// 1    1
// 2   2 2
// 3  3 3 3
// 4 4 4 4 4

void pyramid4(int number){
    int count=1;
    for(int row=1; row<=number; row++){
        for(int col=1;col<=number;col++){
            if(col<=number-row)
                printf("  ");                   // double space
            else
                printf("%d   ", count++);       // triple spaces
                
        }
        printf("\n");
    }
}
// pyramid4
//   1 2 3 4
// 1       1
// 2     2   3
// 3   4   5   6
// 4 7   8   9   10


void pyramid5(int number){
    int count=1;
    for(int row=1; row<=number; row++){
        for(int col=1;col<=row;col++){
                if(col==row)
                    printf("%d",count++);
                else
                    printf("%d*",count++);
        }
        printf("\n");
    }
}
// pyramid5
//     1 2 3 4
// 1   1                        not running inner loop for spaces
// 2   2*3
// 3   4*5*6
// 4   7*8*9*10


void pyramid6(int number){
            for(int row=1;row<=number;row++){
                for(int col=1;col<=row;col++){
                        if(col==row)
                            printf("%d",row);
                        else
                            printf("%d*",row);
                }
                printf("\n");
            }
            
            for(int row=number; row>=1; row--){         // downto 1
                for(int col=1; col<=row; col++){           
                        if(col==row)
                            printf("%d",row);
                        else
                            printf("%d*",row);
                    }
                printf("\n");
            }
}
// pyramid6
//       1 2 3
// 1     1                  not running inner loop for spaces
// 2     2*2
// 3     3*3*3
// 3     3*3*3
// 2     2*2
// 1     1

void pyramid7(int number){
    for(int row=1;row<=number;row++){
                for(int col=1;col<=number;col++){
                    if(col<=number-row)
                        printf(" ");
                    else
                        printf("*");
                }
                for(int col=1;col<=row-1;col++){
                    printf("*");
                }
                printf("\n");
    }
    for(int row=number-1; row>=1; row--){
                for(int col=1; col<=number; col++){
                    if(col<=number-row)
                        printf(" ");
                    else
                        printf("*");
                }
                for(int col=1; col<=row-1;col++){
                    printf("*");
                }
                printf("\n");
    }
}
// pyramid7
//   1234123
// 1    *
// 2   ***
// 3  *****
// 4 *******
// 3  *****
// 2   ***
// 1    *