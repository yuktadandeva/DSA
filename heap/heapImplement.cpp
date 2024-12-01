#include<iostream>
#include<vector>

using namespace std;

class minHeap{
    vector<int> v;
    
    void heapify(int i){

        int minIdx = i;
        int leftIdx = 2*i + 1;
        if(leftIdx<v.size() and v[leftIdx] < v[minIdx]){
            minIdx = leftIdx;
        }
        int rightIdx = 2*i + 2;
        if(rightIdx<v.size() and v[rightIdx] < v[minIdx]){
            minIdx = rightIdx;
        }
         
        if(minIdx != i){
            swap(v[i], v[minIdx]);
            heapify(minIdx);
        }
    }
    
    public:
    
    void push(int val){
        v.push_back(val);
        
        int childIdx = v.size() - 1;
        int parentIdx = childIdx%2 == 0 ? childIdx/2 - 1: childIdx/2;
        
        while(v[childIdx] < v[parentIdx] and parentIdx >= 0){
            swap(v[childIdx], v[parentIdx]);
            childIdx = parentIdx ;
            parentIdx =  childIdx%2 == 0 ? childIdx/2 - 1: childIdx/2;
        }
        
    }
    
    void pop(){
        swap(v[0], v[v.size() - 1]);
        v.pop_back();
        heapify(0);
    }
    
    int top(){
        return v[0];
    }
    
    int size(){
        return v.size();
    }
    
    bool empty(){
        return v.empty();
    }
};

int main() {
    
    minHeap m;
    
    m.push(9);
    m.push(8);
    m.push(7);
    m.push(6);
    m.push(5);
    m.push(4);
    m.push(3);
    m.push(2);
    m.push(1);
    
    cout<< m.size() <<endl;
    
    while(!m.empty()){
        cout<< m.top() <<" ";
        m.pop();
    }
    cout<<endl;
    
    cout<<m.size();
    
    return 0;
}
