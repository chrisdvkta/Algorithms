#include <stdio.h>
#include <stdlib.h>

#define MAXQUEUE 10 

struct Queue{
    int front; 
    int rear; 
    int items[MAXQUEUE];
};typedef struct Queue q; 


void initializeQ(q *queue){
    queue->rear = -1; 
    queue->front= 0 ; 
}

int isEmpty(q *queue){
    if (queue->rear<queue->front){
        return 1; 
    }
    return 0 ;
}

int isFull(q *queue){
    if (queue->rear ==MAXQUEUE-1){
        return 1; 
    }
    return 0; 
}

void enqueue(int x, q *queue){
    if(isFUll(queue)) printf("FULL");
    queue->rear++;
    queue->items[queue->rear] = x; 
}


void dequeue(q *queue){
    if (isEmpty(queue)) printf("EMPTY");
    
}