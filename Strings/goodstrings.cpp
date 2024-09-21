// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

bool isStringGood(string& s){
    
    for(char ch: s){
        if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')){
         return false;
        }
    }
    return true;
    
 
    // for(int i = 0; i< s.length(); i++){
    //     int ch = s[i];
        
    //     if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')){
    //      return false;
    //     }
    // }
    // return true;
}

int main(){
    
  string s = "dogwalker";
  
  cout<<isStringGood(s);
  
    
    return 0;
}