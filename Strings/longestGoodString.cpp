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
    
  string s = "cbaeicdeiou";
  int msf=0;
    for(int i = 0; i< s.length(); i++ ){
        
        for(int j = i;j<s.length();j++){
            
            string substr =  s.substr(i,j-i+1);
            
           if( isStringGood(substr) ){
               int l = j-i+1;
               msf = max(msf,l);
           }
        }
    }
    
    cout<<msf;

  
    
    return 0;
}