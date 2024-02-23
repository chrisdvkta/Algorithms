#include <stdio.h>
#include <stdlib.h>

#define max 100


struct Stack{
    int items[max];
    int top;
};

void initialize(struct Stack *stack){
    stack->top = -1; 
} 

int isFull(struct Stack *stack){
    return stack->top ==max-1;

}

int isEmpty ( struct Stack *stack){
    return stack->top==-1;
}

void push (struct Stack *stack, int val){
    if (isFull(stack)){
        printf("Stack overflow");
    }else{
        stack->items[++stack->top] = val; 
    }
}

int pop ( struct Stack *stack){
    if(isEmpty(stack)){
        printf("Stack Underflow");
    }
    else { 
        stack->items[stack->top--] =NULL;
    }
    return 0; 
    
}


int main(){
    struct Stack stack ;
    initialize(&stack);
    initialize(&stack);
    push(&stack,1);
    push(&stack,2);
    push(&stack,3);

    printf("Popped element : %d \n")
}
