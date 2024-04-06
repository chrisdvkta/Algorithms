#include <stdio.h>
#include <stdbool.h>
#define MAX 5

struct Stack {
    int top ; 
    int data[MAX];
};

void createStack(struct Stack *s){
    s->top =-1; 
}

int isFull(struct Stack *s){
    if (s->top==MAX-1) return 1; 
    return 0 ; 

}

int isEmpty (struct Stack *s){
    if (s->top ==-1){
        return 1;
    }
    return 0;
}


void push (struct Stack *s, int x)
{
    if (isFull(s)){
        printf("Stack overflow");
        return ; 
    }
    s->top+=1;
    s->data[s->top] = x; 


}


void pop (struct Stack *s){
    if (isEmpty(s)){
        printf("Empty");
        return ; 
    }
    s->data[s->top] = NULL; 
    s->top -=1;
}
// void createStack(struct Stack *s){
//     s->top = -1; 
// };

// int isFull(struct Stack *s){
//     if (s->top==MAX-1){
//         return true;
//     }return false; 
// };

// int isEmpty (struct Stack *s){
//     if (s->top ==-1){
//         return true; 
//     }return false; 
// };


// void push (struct Stack *s, int x){
//     if (isFull(s)){
//         printf("Stack overflow\n"); 
//         return;
//     }else{
//         s->top+=1; 
//         s->data[s->top] =x; 
//         printf("%d Entry successfull\n", x);
//     }
// };

// void pop(struct Stack *s){
//     if(isEmpty(s)){
//         printf("Stack underflow");
//         return ;
//     }else { 
//         printf("popping %d....\n", s->data[s->top--]);
//     }
// };


// int main(){ 
//     struct Stack s1;
//     createStack(&s1);  
//     push(&s1,5);
//     push(&s1,4);
//     push(&s1,3);
//     push(&s1,2);
//     push(&s1,1);
//     push(&s1,0);
//     pop(&s1);
//     pop(&s1);
//     pop(&s1);
//     pop(&s1);
//     pop(&s1);
//     pop(&s1);

// };