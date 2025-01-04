#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

int main() {
    string s = "aabacbebebe";
    int n = sizeof(s)/sizeof(s[0]);
    
    int i = 0;
    int j = 0;
    int k = 3;
    int max_len = 0;
    int uniqCnt = 0;
    unordered_map<char, int> freqMap;

    while(j<n){
    
    freqMap[s[j]]++;
    if(freqMap[s[j]] == 1){
        uniqCnt++;
    }
    
    if(uniqCnt>k){
        while(uniqCnt>k){
            freqMap[s[i]]--;
            if(freqMap[s[i]]==0){
                uniqCnt--;
            }
            i++;
        }
    }
    
    if(uniqCnt == k){
        max_len = max(max_len, j-i+1);
    }
    
    j++;
} 
  
    cout<<max_len<<endl;
    return 0;
}