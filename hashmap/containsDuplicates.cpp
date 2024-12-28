#include <iostream>
#include <map>
#include <vector>
using namespace std;

bool isDuplicatePresent(const vector<int>& v){
    
    map<int,int> freqMap;
    for(auto key: v){
        freqMap[key]++;
    }
    
    for(auto& p:freqMap){
        cout<<p.first<<" "<<p.second<<endl;
        if(p.second>1){
            return true;
        }
    }

    
    return false;
    
}

int main() {
   
   vector<int> v = {1,2,3,1};
   
   isDuplicatePresent(v)? cout<<"contains duplicates"<<endl:cout<<"doesn not contain duplicates"<<endl;
   
   
   
    return 0;
}