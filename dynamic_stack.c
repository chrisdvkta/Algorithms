#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


struct Node {
    int data; 
    struct Node *next; 
};typedef struct Node node_t;

// void InitializeStack(struct Node *stack_head){
//     stack_head = NULL; 
// }


// void pop(struct Node *stack){
//     struct Node *ptr ; 
//     if (stack==NULL){
//         printf("stack underflow\n");
//     }else{
//         printf("popping %d", stack->data);
//         ptr = stack; 
//         stack= stack->next; 
//         free(ptr);
//     }
// }

// int isFull(struct Node *stack){
//     struct Node *new = (struct Node*)(malloc (sizeof(struct Node)));
//     if (new==NULL){
//         printf("FULL STACK");
//         return true;
//     }else{
//         free(new);
//         return false; 
//     }
// }
// void push(int x, struct Node *stack){

//     if (isFull(stack)){
//         return; 
//     }
//     struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
//     newNode->data = x; 
//     newNode->next = stack; 
//     stack = newNode; 

   

// }

// void isEmpty (struct Node *stack){
//     if (stack==NULL){
//         printf("Empty stack \n");
//         return ;
//     }
// }


// void main(){ 
//     struct Node stack ; 
//     InitializeStack(&stack); 
//     isEmpty(&stack);
//     push(5, &stack);




// }


void printList (node_t *head){
    node_t *temp = head; 

    while (temp!=NULL){
        printf("%d - ", temp->data); 
    temp  = temp->next; 
    }
    printf("\n"); 
}

int main() { 
    node_t n1,n2,n3; 
    node_t *head ; 
    n1.data = 45; 
    n2.data = 4; 
    n3.data = 6; 

    head = &n3; 
    n3.next = &n2; 
    n2.next = &n1; 
    n1.next = NULL;

    printList(head);
}