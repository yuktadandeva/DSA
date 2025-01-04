#include<iostream>
#include<unordered_map>
#include<iostream>

using namespace std;

class node{
    public:
        char ch;
        bool terminal;
        unordered_map<char, node*> childMap;
    
        node(char ch){
            this->ch = ch;
            this->terminal = false;
        }
};

class trie{
    node* root;
    public:
        trie(){
            root = new node('#');
        }

        void insert(string str){
            node* cur = root;
            for(char ch:str){
                if(cur->childMap.find(ch) == cur->childMap.end()){
                    node* n = new node(ch);
                    cur->childMap[ch] = n;
                }
                cur = cur->childMap[ch];
            }
        }

        bool search(string str){
            node* cur = root;
            for(char ch:str){
                if(cur->childMap.find(ch)== cur->childMap.end()){
                    return false;
                }
                cur = cur->childMap[ch];
            }

            return cur->terminal;
        }

};
int main() {

    string words[] = {"code","coder","coding","block","blocks","news"};

    trie t;
    for(string str: words){
        t.insert(str);
    }

    string queries[] = {"code","coding","blocked","block","news","new"};
    for(string str:queries){
        t.search(str)?cout<<str<<"is present"<<endl: cout<<str<<"is not present"<<endl;
    }
    return 0;
}