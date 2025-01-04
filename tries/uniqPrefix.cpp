#include<iostream>
#include<unordered_map>
#include<iostream>

using namespace std;

class node{
    public:
        char ch;
        bool terminal;
        int frequency;
        unordered_map<char, node*> childMap;
    
        node(char ch){
            this->ch = ch;
            this->terminal = false;
            this->frequency = 0;
        }
};

class trie{
    public:
     node* root;
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
                cur->frequency++;
            }
        }
};

string shortestUniquePrefix(string word){
    node* cur = root;
    string ans = "";

    for(char ch:word){
        ans+=ch;
        cur= cur->childMap[ch];
        if(cur->frequency == 1){
            return ans;
        }
    }
    return ""; 
}
int main() {

    string words[] = {"code","coder","coding","new","neon"};

    trie t;
    for(string str: words){
        t.insert(str);
    }

    for(string word: words){
        cout<<"shortestUniquePrefix("<<word<<")"<< shortestUniquePrefix(word)<<endl;
    }
    return 0;
}