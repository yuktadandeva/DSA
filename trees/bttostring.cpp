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
    
    // TreeNode* temp = root->left;
    // root->left = root->right;
    // root->right = temp;
    
    swap(root->left, root->right);
    
    f(root->left);
    f(root->right);
    return;
}

int h(TreeNode* root){
    if(root == NULL){
        return -1;
    }
    
    int he = 1 + max(h(root->left) , h(root->right));
    
    return he;
}

void btToString(TreeNode* root){
    if(root == NULL){
        return;
    }
    
    cout<<root->val;
    
    if(root->left != NULL){
          cout<<"(";
          btToString(root->left);
          cout<<")";
    }
    
    if(root->right != NULL){
          cout<<"(";
          btToString(root->right);
          cout<<")";
    }
      
    return;
}

int main() {
    TreeNode* root = NULL;
 
    root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    
    btToString(root);
    // root->right->right = new TreeNode(6);
    // root->left->right->left = new TreeNode(7);
      
    // root = buildTree();
    // cout << h(root);
    // printPreOrder(root);
    // cout<<endl;
    // f(root);
    // printPreOrder(root);
    // cout<<sumOfNodes(root);
    // printPreOrder(root);
    return 0;
}