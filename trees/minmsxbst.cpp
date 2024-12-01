#include<iostream>
#include<queue>

using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode* insert(TreeNode* root, int key){
    if(root == NULL){
        return new TreeNode(key);
    }
    
    if(key < root->val){
        root->left = insert(root->left, key);
    }else{
         root->right = insert(root->right, key);
    }
    
    return root;
}

bool search(TreeNode* root, int key){
    if(root == NULL){
        return false;
    }
    if(key == root->val){
        return true;
    }
    
    if(key < root->val){
        return search(root->left, key);
    }else{
        return search(root->right, key);
    }
}

TreeNode* findMin(TreeNode* root){
    while(root->left != NULL){
        root = root->left;
    }
    
    return root;
}


TreeNode* findMax(TreeNode* root){
    while(root->right != NULL){
        root = root->right;
    }
    
    return root;
}


int main() {
    
    // printLevelOrder(root);
    return 1;
}
