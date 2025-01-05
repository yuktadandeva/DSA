#include<iostream>
#include<unordered_map>
#include<iostream>

using namespace std;

class node{
    public:
       node* left;
       node* right;
    
        node(){
            this->left = NULL;
            this->right = NULL;
        }
};

class trie{
    node* root;
    public:
        trie(){
            root = new node();
        }

        void insert(int n){
            node* cur = root;
            for(int i = 31; i>=0; i--){
                int ithBit = (n>>i)&1;
                if(ithBit == 0){
                    if(cur->left == NULL){
                        cur->left = new node();
                    }
                    cur= cur->left;
                }else{
                    if(cur->right == NULL){
                        cur->right = new node();
                    }
                    cur= cur->right;           
            }
        }
        }
        bool search(int n){
            node* cur = root;
            for(int i = 31; i>=0; i--){
                int ithBit = (n>>i)&1;
                if(ithBit == 0){
                    if(cur->left == NULL)return false;
                    cur= cur->left;
                }else{
                    if(cur->right == NULL)return false;
                    cur= cur->right;
                }
            }
        return true;
        }

};
int main() {
    int arr[] = {2,4,8,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    trie t;
    for(int i=0; i<n; i++){
        t.insert(arr[i]);
    }
    cout<<t.search(2)<<endl;
    cout<<t.search(15)<<endl;   

    return 0;
}