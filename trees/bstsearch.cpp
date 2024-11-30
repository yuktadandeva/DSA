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

// TreeNode* buildTreeLevelOrder(){
//     queue<TreeNode*> q;
//     int val;
//     cin>>val;
    
//     TreeNode* root = new TreeNode(val);
//     q.push(root);
    
//     while(!q.empty()){
//         TreeNode* front = q.front();
//         q.pop();
        
//         int lval;
//         cin>>lval;
//         if(lval!=-1){
//         TreeNode* left = new TreeNode(lval);
//         front->left = left;
//         q.push(left);}
        
//         int rval;
//         cin>>rval;
//         if(rval!=-1){
//         TreeNode* right = new TreeNode(rval);
//         front->right = right;
//         q.push(right);}
//     }
    
//     return root;
// }

// // void levelWiseOrder(TreeNode* root){
// //  queue<TreeNode*> q;
// //  q.push(root);
// //  q.push(NULL);
 
// //  while(!q.empty()){
// //      TreeNode* front = q.front();
// //      q.pop();
     
// //      if(front == NULL){
// //      cout<<endl;
// //         if(!q.empty()){
// //             q.push(NULL);
// //         }
// //      }else{
// //         cout<<front->val;
     
// //      if(front->left!= NULL){
// //          q.push(front->left);
// //      }
     
// //      if(front->right!=NULL){
// //          q.push(front->right);
// //      }
// //      }
// //  }
// // }

// void levelWiseOrder(TreeNode* root){
//     queue<TreeNode*> q;
//     q.push(root);
    
//     while(!q.empty()){
//         int qsize = q.size();
        
//         while(qsize--){
//             TreeNode* front = q.front();
//             q.pop();
            
//         cout<<front->val;
     
//      if(front->left!= NULL){
//          q.push(front->left);
//      }
     
//      if(front->right!=NULL){
//          q.push(front->right);
//      }
//         }
//     }
// }

int main() {
    TreeNode* root = buildTreeLevelOrder();
    levelWiseOrder(root);
    // printLevelOrder(root);
    return 1;
}
