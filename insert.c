// Insert at begining 
#include<stdio.h>
#include<stdlib.h>  //for malloc
struct Node
{
    int data;
    struct Node * next;
    
};
struct Node *start = NULL;
void append(){
    struct Node *temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter node data:");
    scanf("%d",&temp->data);
    temp->next = NULL;
    if(start==NULL){
        start=temp;
    }
    else{
        struct Node *p;
        p = start;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next = temp;
    }
}