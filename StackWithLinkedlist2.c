#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* link;
};

struct Node* top;

void push(int data)
{
    struct Node* tem;
    tem = (struct Node*)malloc(sizeof(struct Node));
    if (!tem)
    {
        printf("\nHeap Overflow");
        exit(1);
    }
    tem->data = data;
    tem->link = top;
    top = tem;
}

int isEmpty()
{
    return top == NULL;
}

int peek()
{
    if (!isEmpty())
        return top->data;
    else
        exit(1);
}

void pop()
{
    struct Node* tem;
    if (top == NULL)
    {
        printf("\nStack Underflow\n");
        exit(1);
    }
    else
    {
        tem = top;
        top = top->link;
        tem->link = NULL;
        free(tem);
    }
}

void display()
{
    struct Node* tem;
    if (top == NULL)
    {
        printf("\nStack Underflow");
        exit(1);
    }
    else
    {
        tem = top;
        while (tem != NULL)
        {
            printf("%d-> ", tem->data);
            tem = tem->link;
        }
    }
}

int main()
{
    push(4);
    push(3);
    push(2);
    push(1);
    display();
    printf("\nTop element is %d\n", peek());
    pop();
    pop();
    printf("Stack after popping 2 times \n");
    display();
    printf("\nTop element is %d\n", peek());
    return 0;
}    