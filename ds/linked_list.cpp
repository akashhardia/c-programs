#include<stdio.h>
#include<stdlib.h>              //  malloc()    or malloc.h

struct Node{
    int data;
    struct Node *next;
};
typedef struct Node node;           // no need to write 'struct Node', just use 'node'

Node* getnode(){                                            // getnode   (create node)
    int d;
    node *newnode = (node*)malloc(sizeof(node));
    printf("enter data: \n");
    scanf("%d",&d);
    newnode->data = d;
    newnode->next = NULL;
    return newnode;
}


void printlist(node *n){                                    // print
    while(n!= NULL ){
        printf("%d ",n->data);
        n = n->next;
    }
}

//====================================INSERTION=====================================================================
//==================================================================================================================
void insertAtBeg(node *start){                              // insert at begining
    node *newnode = getnode();
    if(start==NULL){
        start = newnode;
    }else{
        newnode->next = start;
        start = newnode;
    }
}

void insertAtEnd(node *start){                              // insert at end
    node *newnode, *temp;
    newnode= getnode();
    if(start == NULL){
        start = newnode;
    }else{
        temp  = start;
        while(temp->next!=NULL
            temp = temp->next;
        temp->next = newnode;
    }
}

void insertAtInterme(node *start){                          // insert at intermediate position
    int pos, nodecount=0, ctr = 1;
    node *temp, *newnode;
    temp= start;
    newnode = getnode();
    printf("enter a position: \n");
    scanf("%d",&pos);
                while(temp->next!=NULL){            // counting total nodes
                    count++;
                    temp = temp->next;
                }
    temp = start;
    if(pos>1 && pos<count){
        while(ctr!=pos){
            temp = temp->next;
            ctr++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }else{
        printf("the position is not in middle");
    }
}


//=======================================================================================================================
//==========================================DELETION=========================================================================

void deleteAtBeg(node *start){                              // deletion at begining
    if(start == NULL)
        printf("the list is alredy empty");
    else{
        node *temp = start;
        start = temp->next;
        free(temp);
        printf("node deleted");
    }
}

void deleteAtEnd(node *start){                              // deletion at end
    if(start ==NULL)
        printf("empty list");
    else{
        node *temp, *prev;
        temp = start;
        while(temp->next!=NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
        printf("node deleted");
    }
}

void deleteAtInterme(node *start){                          // deletion at intermediate
    int pos, nodecount=0, ctr=1;
    printf("enter pos: \n");
    scanf("%d",&pos);
    node *temp, *prev;
    temp = start;
                        while(temp->next!=NULL){
                            nodecount++;
                            temp = temp->next;
                        }
    temp = start;
    if(pos>1 && pos<nodecount){
        while(ctr!=pos){
            prev = temp;
            temp = temp->next;
            ctr++;
        }
        prev->next = NULL;
        free(temp);
        printf("node deleted");
    }else{
        printf("position not in middle");
    }
}

//=======================================================================================================================
//==========================================MAIN=========================================================================

int main(){
    int n;
    node *newnode, *temp, *start = NULL;
    printf("enter no. of nodes: \n");
    scanf("%d",&n);
    for(int i = 0; i<n;i++){
        newnode = getnode();
        if(start == NULL){
            start = newnode;
        }else{
            temp = start;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
    
    printlist(start);
    return 0;
}