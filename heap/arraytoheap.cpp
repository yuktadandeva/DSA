#include<iostream>
#include<vector>
using namespace std;

void heapify(vector<int>& v, int n, int i){

        int maxIdx = i;
        int leftIdx = 2*i + 1;
        if(leftIdx<v.size() and v[leftIdx] > v[maxIdx]){
            maxIdx = leftIdx;
        }
        int rightIdx = 2*i + 2;
        if(rightIdx<v.size() and v[rightIdx] > v[maxIdx]){
            maxIdx = rightIdx;
        }
         
        if(maxIdx != i){
            swap(v[i], v[maxIdx]);
            heapify(v, n, maxIdx);
        }
    }

int main() {
    vector<int> v = {1,3,2,7,5,4,6,9,8};
    int n = v.size();
    
    for(int i = n-1; i>=0; i++){
        heapify(v,n,i);
    }
    
    for(int i = 0; i<= n-1; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
