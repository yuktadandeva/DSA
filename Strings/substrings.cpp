// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;



int main(){
    
    string s = "abcde";
   
    for(int i = 0; i< s.length(); i++ ){
        
        for(int j = i;j<s.length();j++){
            
            cout<<  s.substr(i,j-i+1) <<" ";
        }
        cout<<endl;
    }
  
    
    return 0;
}