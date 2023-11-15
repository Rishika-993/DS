#include<stdio.h>
#include<stdlib.h>
#define  size 4
int top = -1, arr[size];

void push(int val){
    if(top == size-1){
        printf("Overflow");
    }
    else{
        top = top+1;
        arr[top]= val;
    }
}
void pop(){
    if(top == -1){
        printf("Underflow");
    }
    else{
        printf("Popped item %d", arr[top]);
        top = top-1;
    }
}

int main(){
    push(23);
    push(8);
    push(89);
    pop();
    printf("\nItems in Stack are:");
    for(int i=0; i<size; i++){
        printf("\n%d",arr[i]);
    }
}
