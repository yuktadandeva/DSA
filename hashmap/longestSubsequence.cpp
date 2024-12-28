#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution{
    public:
    int longestConsecutive(vector<int>& nums){
        unordered_map<int, bool> startMap;
        
        for(int x: nums){
            if(startMap.find(x-1)==startMap.end()){
            startMap[x] = true;
            }else{
                startMap[x] = false;
            }            
            
            if(startMap.find(x+1)!= startMap.end()){
                startMap[x+1] = false;
            }
            
        }
        for(auto p:startMap){
        cout<<p.first<<" : "<<p.second<<endl;
    }
    
    int maxSoFar = 0;
    for(auto p:startMap){
        int el = p.first;
        int canStart = p.second;
        if(canStart){
            int cnt = 0;
            while(startMap.find(el) != startMap.end()){
                cnt++;
                el++;
            }
            
            maxSoFar = max(maxSoFar,cnt);
        }
    }
    
    return maxSoFar;
    }
    
    
};
int main() {
   
 Solution s;
 vector<int> nums = {4,2,1,3,7,5,9,8,12,15,13,14};
   
  cout<<s.longestConsecutive(nums)<<endl;
 
    return 0;
}