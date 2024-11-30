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
int cnt = 0;
void findTargetPathSum(TreeNode* root, int target){
    
    if(root == NULL){
        return ;
    }
    // if(root->left == NULL and root->right == NULL){
    if(root->val == target ){
            cnt++;
    }
    // }
    
    
    target -= root->val;
    // ans.push_back(root->val);
    findTargetPathSum(root->left, target);
    findTargetPathSum(root->right, target);
    // ans.pop_back(root->val);
    return;
    
}
int h(TreeNode* root){
    if(root == NULL){
        return -1;
    }
    
    int he = 1 + max(h(root->left) , h(root->right));
    
    return he;
}

int isBalanced(TreeNode* root){
    if(root == NULL){
        return true;
    };
    
    bool leftIsBal = isBalanced(root->left) ;
    bool rightIsBal = isBalanced(root->right);

    bool he = abs(h(root->left) - h(root->right))<=1?true:false;
    
  return leftIsBal and rightIsBal and he;
}

int main() {
    TreeNode* root = NULL;
 
    root = new TreeNode(1);
    root->left = new TreeNode(2);
    // root->right = new TreeNode(3);
    root->left->left = new TreeNode(3);
    // root->left->right = new TreeNode(1);
    // root->left->left->left = new TreeNode(1);
    // root->left->left->right = new TreeNode(8);
    // root->right->left = new TreeNode(2);
    // root->right->right = new TreeNode(5);
    // root->right->right->right = new TreeNode(1);
      isBalanced(root)?cout<<"t":cout<<"f";
    // findTargetPathSum(root, 4);
    // cout<<cnt;

    return 0;
}