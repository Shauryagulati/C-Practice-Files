#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
    
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

/*
// Complexity is O(n*n)

int calcHeight(node* root){
    if(root == NULL) return 0;
    return max(calcHeight(root->left), calcHeight(root->right)) + 1;
}

int calcDiameter(node* root){
    if(root == NULL) return 0;
    
    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    int currDiameter = lHeight + rHeight + 1;
    
    int ldiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);
    
    return max(currDiameter, max(ldiameter, rDiameter));
}
*/

// More Optimized Version with Complexity O(n)

int calcDiameter(node* root, int* height){
    if(root == NULL){
        *height = 0;
        return 0;
    }
    
    int lh = 0, rh = 0;
    int ldiameter = calcDiameter(root->left, &lh);
    int rDiameter = calcDiameter(root->right, &rh);
    
    int currDiameter = lh + rh + 1;
    *height = max(lh, rh) + 1;
    
    return max(currDiameter, max(ldiameter, rDiameter));
}

int main(){
    struct node* root = new node(1);
    
    root->left = new node(2);
    root->right = new node(3);
    
    root->left->left = new node(4);
    root->left->right = new node(5);
    
    root->right->left = new node(6);
    root->right->right = new node(7);
    
    int height = 0;
    cout<<calcDiameter(root, &height);
    
    return 0; 
}

