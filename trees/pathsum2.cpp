// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
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

vector<int> ans ;
void printans(){
    for(int i:ans){
        cout<<i<<" ";
    }
}
void findTargetPathSum(TreeNode* root, int target){
    
    if(root == NULL){
        return ;
    }
    if(root->left == NULL and root->right == NULL){
        if(target == root->val){
            ans.push_back(root->val);
            printans();
            cout<<endl;
        }
      
    }
    
    
    target -= root->val;
    // ans.push_back(root->val);
    
    findTargetPathSum(root->left, target);
    
    findTargetPathSum(root->right, target);
    ans.pop_back(root->val);
    return;
    
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
      
    findTargetPathSum(root, 22);

    return 0;
}