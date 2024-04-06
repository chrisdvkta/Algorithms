#include <stdio.h>
#include <stdlib.h>

struct item{
    int value; 
    int priority; 
};

struct pqueue{
    int front; 
    int rear; 
    struct item items[10];
};typedef struct pqueue pq ; 


void initialize(pq *p){
    printf("Initialized");
    p->front = 0;
    p->rear = 0; 
}


void insert(int x,int priority,  pq *p ){

    
    printf("%d inserting......\n",x);
    (p->items[p->rear]).value = x;
    (p->items[p->rear++]).priority = priority;
    printf("%d inserted",(p->items[p->rear-1]).value ) ;


}

void delete(pq *p){
    int temp = p->items[p->rear].priority;
    int val;
    for (int i = p->front; i<=p->rear;i++){
        if(p->items[i].priority<temp){
            val =i;
            temp= p->items[i].priority;
        }
    }
            printf("\n%d of priority %d deleted\n", p->items[val].value,temp);
}

int main(){
    pq *p = (pq*) malloc(sizeof(pq)); 
    initialize(p);
    printf("enter\n");
    insert(5,2, p);
    insert(2,1, p);
    insert(1,0, p);
    delete(p);
}
