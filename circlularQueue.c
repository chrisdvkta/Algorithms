#include <stdio.h> 
#include <stdlib.h>

struct cqueue{
    int front; 
    int rear; 
    int items[5];
};typedef struct cqueue cq;

void initialize(cq *c){
    c->front=c->rear = 5;
    printf("initialized\n");
}

void insert(cq *c, int x){
    if (c->front==(c->rear+1)%5){
        return ;
    }
    else{
        c->rear = (c->rear +1)%5; 
        c->items[c->rear] = x; 
        printf("Enqueued %d", x);
    }
}

void delete (cq *c){
    if (c->rear==c->front){
        printf("Empty ");
        return ; 
    }
    c->front =(c->front+1) %5; 
    int item = c->items[c->front]; 
    printf("%d",item); 
}


int main() { 
    cq *c;
    initialize(c);

}