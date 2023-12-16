//initialite root node and loop until queue is empty . 
//remove first node and find mid
//create new node with middle node and set left child to dequeue node left child if present

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Node{
    int val; 
    Node* left; 
    Node* right; 
};

Node* sortedArrayToBST(vector<int>&nums){
    if (nums.empty()){
        return NULL;
    }

    int n = nums.size();
    int mid = n/2; 
    Node* root = new Node{nums[mid],NULL,NULL};
    //create queue    
    queue<pair<Node*, pair<int, int>>> q; 
    //push root to queue
    q.push({root, {0,mid-1}});
    q.push({root,{mid+1,n-1}});

    while (!q.empty()){
        //pull first element from the queue
        pair<Node*, pair<int, int> > curr=q.front();
        q.pop(); 

        Node* parent = curr.first;
        int left = curr.second.first; 
        int right = curr.second.second;

        //check if parent node is not null; 

        if (left<=right &&parent!=NULL){
            int mid = (left + right)/2; 
            Node* child = new Node{ nums[mid], NULL,NULL};

            if (nums[mid]<parent->val){
                parent->left = child; 
            }else{
                parent->right = child ; 
            }

            q.push({child,{left,mid-1}});
            q.push({child,{mid+1,right}});

        }
    }
    return root; 
}

void printBST(Node* root){
    if (root ==NULL)
        return ; 
    cout<<root->val<<" ";
    printBST(root->left);
    printBST(root->right);
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    Node* root = sortedArrayToBST(nums);
    printBST(root);
    return 0 ; 
}