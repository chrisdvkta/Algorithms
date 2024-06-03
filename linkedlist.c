#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAME_LEN 25

struct node{
    int value;
    struct node *next; 
};

typedef struct node Node;



int main(){
struct node *first = NULL;


char s[1]; 
do{
    printf("Enter : ");
    scanf(" %c",&s[0]);
    struct node *new_node; 
    new_node = malloc(sizeof(struct node)); 
    scanf(" %d",(*new_node).value);
    new_node->next = first; 
    first = new_node ;
}while(s[0] !='n');
printf("done");
}