// LIFO             last in - first out
#include<stdlib.h>
#include<stdio.h>
#define MAX 5
int stack[MAX];                                         // stack
int top = -1;

using namespace std;

void push(){                                            //PUSH
    int item;
    printf("enter item to push: \n");
    scanf("%d",&item);
    
    if(top == MAX-1){
        printf("Stack is full\n\n");
    }else{
        top++;
        stack[top] = item;
        printf("item pushed\n\n");
    }
}


void pop(){
    if(top == -1)
        printf("stack empty, can't pop");
    else{
        int item = stack[top];
        top--;
        printf("element %d popped\n\n", item);
        
    }
}

void traverse(){                                                // display
    if(top==-1)
        printf("stack empty\n\n");
    else{
        for(int i = 0; i<=top; i++){                            // printing upto top
            printf("%d ",stack[i]);
        }
        printf("\n\n");
    }
}


int main(){
    int ch;
    
    while(1){
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Traverse\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        
        switch(ch){
            case 1: push();
                    break;
            
            case 2: pop();
                    break;
            
            case 3: traverse();
                    break;
            
            case 4: exit(0);
            
        }
    }
    return 0;
}

//          stack (MAX = 5)
//         __      __      __      __      __               
//    top   0       1       2       3       4
//    -1

//          insertion at 'top'    -  incre top & insert  (if not full)
//          deletion  at 'top'    -  decre top           (if not empty)

