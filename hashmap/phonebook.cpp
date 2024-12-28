#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
   map<string, vector<string>> phoneBook;
    phoneBook["Aditya"].push_back("4444");
    phoneBook["Aditya"].push_back("3333");
    phoneBook["Aditya"].push_back("2222");
    
     phoneBook["Yukta"].push_back("4444");
      phoneBook["Yukta"].push_back("4444");
      
       phoneBook["Aryan"].push_back("4444");
       
       for(auto &p : phoneBook){
           string contactName = p.first;
           vector<string> phoneNums = p.second;
           
           cout<<contactName<<" : ";
           for(string num: phoneNums){
               cout<<num<<" ";
           }
           cout<<endl;
       }
   

    return 0;
}