#include <stdio.h>
#include <stdlib.h>
#define max 8


struct queue{
    int front; 
    int rear; 
    int items[max];
};
typedef struct queue queue;


void makeEmpty(queue *q ){

    q->rear = -1 ; 
    q->front =0 ; 

}

int isEmpty(queue *q){
    if (q->rear < q->front){
        return 1; 
    }return 0;
}


int isFull(queue *q){ 
    if (q->rear ==max-1){
        return 1; 
    }return 0 ; 
}

void enqueue(queue *q, int x){
    if (isFull(q)){
        return ;
    }
    q->rear++; 
    q->items[q->rear] = x; 
    printf("%d enqueued succesfully\n", x);
}

void dequeue(queue *q){
    if (isEmpty(q)) return ;
    q->items[q->front]; 
    printf("%d dequeued successfully \n", q->items[q->front]);
    q->front++; 
    
}






int main(){ 

    queue q1; 
    makeEmpty(&q1);
    enqueue(&q1,5);
    enqueue(&q1,4);
    enqueue(&q1,3);
    enqueue(&q1,2);
    dequeue(&q1);
}
