#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class TreeNode {
public:
	char val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(char val) {
		this->val = val;
		this->left = this->right = NULL;
	}
};


TreeNode* buildTree() {

	int val;
	cin >> val;

	if (val == -1) {
		return NULL;
	}

	TreeNode* root = new TreeNode(val);

	// ask your friend to build the leftSubtree using its preOrder

	root->left = buildTree();

	// ask your friend to build the rightSubtree using its preOrder

	root->right = buildTree();

	return root;

}
unordered_map<int,vector<char>> distMap;

void calVerticalDist(TreeNode* root, int d){
    
    if(root==NULL){
        return;
    }
    
    distMap[d].push_back(root->val);
    calVerticalDist(root->left,d-1);
    calVerticalDist(root->left,d+1);
}


int main() {
    
    TreeNode* root = NULL;

	root = new TreeNode('A');
	root->left = new TreeNode('B');
	root->right = new TreeNode('C');
	root->left->left = new TreeNode('D');
	root->left->right = new TreeNode('E');
	root->left->right->left = new TreeNode('G');
	root->right->right = new TreeNode('F');
	root->right->right->left = new TreeNode('H');
	root->right->right->left->right = new TreeNode('I');
	
	calVerticalDist(root,0);
	
	for(auto p:distMap){
	    cout<<p.first<<" : ";
	    for(auto x:p.second){
	        cout<<x<<" ";
	    }
	    cout<<endl;
	    
	}

    return 0;
}