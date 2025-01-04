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
    node* root;
    int n;
    public:

        trie(){
            root = new node('#');
            n=0;
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
        n++;
        }
};

string longestCommonPrefix(string word){
    node* cur = root;
    string ans = "";

    for(char ch:word){
        cur= cur->childMap[ch];
        if(cur->frequency !=n)break;
        ans+=ch;
    }
    return ans; 
}
int main() {

    string words[] = {"floor","fly","flow"};

    trie t;
    for(string str: words){
        t.insert(str);
    }

   
        cout<<"longestCommonPrefix"<< longestCommonPrefix(words[0])<<endl;
 
    return 0;
}