#include <stdio.h>
#include <stdlib.h>

#define max 9

struct cqueue{
    int front ;
    int rear; 
    int items[max];
};
typedef struct cqueue cqueue; 

void makequeue(cqueue *q){ 
    q->front  = q->rear=max -1 ; 
}

void insert(cqueue *q, int x){ 
    if (q->front ==(q->rear+1)%max){ 
        printf("queue is full \n"); 
    }else{
        q->rear = (q->rear+1)%max; 
    }
    q->items[q->rear] = x; 
    printf("\ninserted %d succesfully\n",x);
}

int delete (cqueue *q){
    if (q->front==q->rear){ 
        printf("queue is empty \n"); 
    }
    q->front = (q->front + 1)%max; 
    int item  = q->items[q->front]; 
    return item ; 
}

int main() {
    cqueue c1 ;
    makequeue(&c1); 
    insert(&c1, 5);
    insert(&c1, 2);
    insert(&c1, 1);
    printf("%d",delete(&c1));
    printf("%d",delete(&c1));
}