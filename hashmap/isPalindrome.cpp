#include <iostream>
#include <set>
#include <vector>
using namespace std;

int longestPalindrome(string inp){
    
    int ans;
    set<char> s;
    
   for(char c : inp){
       if(s.find(c) == s.end()){
           s.insert(c);
       }else{
           ans+=2;
           s.erase(c);
       }
   }
 
   if(!s.empty()){
       ans++;
   }
   
   return ans;
}

int main() {
   
  string s= "abccccdd";
   
  cout<<longestPalindrome(s)<<" ";
   
   
   
    return 0;
}