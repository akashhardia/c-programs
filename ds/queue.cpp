//          FIFO        First in - First Out

#include<stdlib.h>                  // exit
#include<stdio.h>
#define MAX 5
int queue[MAX];
int rear = -1;
int front = -1;

void insert(){
    int item;
    printf("enter item to insert: ");
    scanf("%d",&item);
    
    if(rear == MAX-1)
        printf("queue is full\n\n");
    else{
        rear++;
        queue[rear] = item;
        if(front == -1){
            front = 0;
        }
        printf("item inserted\n\n");
    }
}

void del(){
    if(front > rear){
        printf("queue is empty\n\n");
    }else{
        printf("%d deleted from queue \n\n", queue[front++]);
    }
}

void traverse(){                                                // display
    if(front > rear)
        printf("queue empty\n\n");
    else{
        for(int i = front; i<=rear; i++){                            // printing upto top
            printf("%d ",queue[i]);
        }
        printf("\n\n");
    }
}

int main(){
    int ch;
    while(1){
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Traverse\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        
        switch(ch){
            case 1: insert();
                    break;
            
            case 2: del();
                    break;
            
            case 3: traverse();
                    break;
            
            case 4: exit(0);
        }
    }
    return 0;
}



//          queue (MAX = 5)
//           __      __      __      __      __               
//    front   0       1       2       3       4
//    rear
//    -1
//    

//  ENQUEUE->        insertion at 'rear'    -  incre 'REAR' & insert  (if not full)
//  DEQUEUE->        deletion  at 'front'   -  incre 'front'          (if front smaller than rear)

            