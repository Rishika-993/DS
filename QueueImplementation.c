#include<stdio.h>
#include<stdlib.h>
struct Queue{
    int size;
    int f;
    int r;
    int *arr;
};
void enqueue(struct Queue *q, int val){
    if(isFull(q)){
        print("overflow");
    }
    else{
        q->r = q->r+1;
        q->arr[q->r] = val;
    }
}
int dequeue(struct Queue *q){
    int a = -1;
}
int main(){
    struct Queue q;
    q.size = 10;
    q.f = q.r = -1;
    q.arr = (int*)malloc(sizeof(int));
}