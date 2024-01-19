void push(int x, struct Node *stack){

    if (isFull(stack)){
        return; 
    }
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = x; 
    newNode->next = stack; 
    stack = newNode; 

   

}