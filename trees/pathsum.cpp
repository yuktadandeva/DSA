// Online C++ compiler to run C++ program online
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
int sum = 0;
bool findTargetPathSum(TreeNode* root, int target){
    if(root == NULL){
        return false;
    }
    if(root->left == NULL and root->right == NULL){
        if(target == root->val){
            return true;
        }
            return false;
    }
    
    target -= root->val;
   
    return findTargetPathSum(root->left, target) or findTargetPathSum(root->right, target);
    
}

int main() {
    TreeNode* root = NULL;
 
    root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->right->right->right = new TreeNode(1);
      
    findTargetPathSum(root, 22)?cout<<"t":cout<<"f";

    return 0;
}