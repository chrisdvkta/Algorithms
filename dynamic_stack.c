#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


struct Node {
    int data; 
    struct Node *next; 
};typedef struct Node node_t;

void initializeEmptyStack (node_t **stack_head){
    *stack_head = NULL;
    printf("initialized");
}

int isFull(node_t *s){
    node_t *new = (node_t *) malloc(sizeof(node_t));
    if (new ==NULL){
        return 1; 
    }
    free(new);
    return 0; 
}


void push (int x, node_t **stack){
    if (isFull(*stack)){
        printf("FULL");
        return; 
    }
    node_t *newNode = (node_t*) (malloc(sizeof(node_t)));
    newNode->data = x; 
    newNode->next = *stack ; 
    *stack = newNode; 
}

int isEmpty(node_t **S){
    if (*S==NULL){
        printf("\nEMPTY");
        return 1; 
    }
    return 0 ; 
}


void pop (node_t **stack){
    if(isEmpty(stack)){
        return; 
    }
    node_t *ptr ;
    int x= (*stack)->data;
    printf("\nPopping %d", x);
    ptr = *stack ; 
    *stack = (*stack)->next; 
    free(ptr);
}

int main() { 
    node_t *stack ; 
    initializeEmptyStack(&stack);
    isEmpty(&stack);
    push(5,&stack);
    pop(&stack);
    isEmpty(&stack);

}