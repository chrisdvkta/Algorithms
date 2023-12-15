#include <iostream>

using namespace std; 

class Tnode{
    public : 
    int data; 
    Tnode* left;
    Tnode* right;
};

Tnode* newNode(int data) ;

//constructiong a balanced binary search tree

Tnode* sortedArrayToBST(int arr[], int start , int end){
  if (start>end) return NULL; 

   int mid = (start + end)/2; 
   Tnode* root = newNode(arr[mid]);
   root->left = sortedArrayToBST(arr,start,mid-1);
   root->right = sortedArrayToBST(arr,mid+1,end);
   return root; 
}


Tnode* newNode(int data){
    Tnode* node = new Tnode();
    node->data = data; 
    node->left = NULL; 
    node->right = NULL;
    return node ; 
}


//printing; 


void preOrder(Tnode* node){
    if (node ==NULL){
        return; 
    }
    cout<<node->data<<" ";
    preOrder(node->left);
    preOrder(node->right);

}


int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    Tnode* root = sortedArrayToBST(arr,0,n-1); 
    preOrder(root); 
    return 0; 
}