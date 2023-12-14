#include <stdio.h>
#include <stdlib.h>
#define NAME_LEN 25

struct node{
    int value;
    struct node *next; 
};



int main(){
struct node *first = NULL;


struct node *new_node; 
new_node = malloc(sizeof(struct node));
(*new_node).value = 120; 

new_node->next = first; 
first = new_node ;

}