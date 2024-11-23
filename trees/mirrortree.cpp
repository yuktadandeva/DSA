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
    
    cout<<root->val<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
 
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

int sumOfNodes(TreeNode* root){
    if(root == NULL){
        return 0;
    }
    
    int sum = root->val +  sumOfNodes(root->left) + sumOfNodes(root->right);
    
    return sum;
}

void f(TreeNode* root){
    if(root == NULL){
        return;
    }
    
    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;
    
    f(root->left);
    f(root->right);
    return;
}

int main() {
    TreeNode* root = NULL;
    
    // root = buildTree();
    
    root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(40);
    root->left->right = new TreeNode(50);
    root->right->right = new TreeNode(60);
    root->left->right->left = new TreeNode(70);
    
    printPreOrder(root);
    cout<<endl;
    f(root);
    printPreOrder(root);
    // cout<<sumOfNodes(root);
    // printPreOrder(root);
    return 0;
}