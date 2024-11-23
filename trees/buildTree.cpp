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
        cout<<-1<<" ";
        return;
    }
    //recursiive case
    
    printPreOrder(root->left);
    printPreOrder(root->right);
    cout<<root->val<<" ";
 
}

TreeNode* buildTree(){
    int val;
    cin>>val;
    
    if(val == -1){
        return NULL;
    }
    
    TreeNode* root = new TreeNode(val);
    
    root->left = buildTree();
    root->right = buildTree();
    
    return root;
}

int main() {
    TreeNode* root = NULL;
    
    root = buildTree();
    
    // root = new TreeNode(10);
    // root->left = new TreeNode(20);
    // root->right = new TreeNode(30);
    // root->left->left = new TreeNode(40);
    // root->left->right = new TreeNode(50);
    // root->right->right = new TreeNode(60);
    // root->left->right->left = new TreeNode(70);
    
    printPreOrder(root);
    return 0;
}