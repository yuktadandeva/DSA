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

void levelWiseOrder(TreeNode* root){
 queue<TreeNode*> q;
 q.push(root);
 q.push(NULL);
 
 while(!q.empty()){
     TreeNode* front = q.front();
     q.pop();
     
     if(front == NULL){
     cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
     }else{
        cout<<front->val;
     
     if(front->left!= NULL){
         q.push(front->left);
     }
     
     if(front->right!=NULL){
         q.push(front->right);
     }
     }
 }
}

void levelWiseOrder(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    
    while(!q.empty()){
        int qsize = q.size();
        
        while(qsize--){
            TreeNode* front = q.front();
            q.pop();
            
        cout<<front->val;
     
     if(front->left!= NULL){
         q.push(front->left);
     }
     
     if(front->right!=NULL){
         q.push(front->right);
     }
        }
    }
}
int main() {
    TreeNode* root = buildTree();
    printLevelOrder(root);
    return 1;
}
