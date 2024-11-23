#include <iostream>
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

void printPreOrder(TreeNode* root){
    //base case
    if(root == NULL){
        cout<<-1;
        return;
    }
    //recursiive case
    cout<<root->val<<" ";
    
    printPreOrder(root->left);
    printPreOrder(root->right);
}

int main() {
    TreeNode* root = NULL;
    
    root = new TreeNode(70);
    root->left = new TreeNode(10);
    root->right = new TreeNode(20);
    root->left->left = new TreeNode(30);
    root->left->right = new TreeNode(40);
    root->right->right = new TreeNode(50);
    root->left->right->left = new TreeNode(60);
    
    printPreOrder(root);
    return 0;
}