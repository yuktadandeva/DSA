#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int val){
//base case
if(s.empty()){
    s.push(val);
    return;
}

//recursive case
int x = s.top();
s.pop();
insertAtBottom(s,val);
s.push(x);

return;
}

void printStack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}

void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    
    int x = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s, x);
    
    return;
}

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    
    // insertAtBottom(s, 0);
    reverseStack(s);
    printStack(s);
    
    return 0;
}