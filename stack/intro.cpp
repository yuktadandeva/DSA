#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class stack{
    vector<T> v;
    
    public:
    void push(T val){
        v.push_back(val);
    } 
    
    void pop(){
        v.pop_back();
    }
    
    T top(){
        return v.back();
    }
    
    int size(){
        return v.size();
    }
    
    bool empty(){
        return v.empty();
    }
};

int main() {
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout<<s.size()<<endl;
    
    s.pop();
    cout<<s.size()<<endl;
    
    cout<<s.top();
    return 0;
}