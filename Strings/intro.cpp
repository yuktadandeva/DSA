// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

int main(){
    
    string s = "dandeva";
    
    // sort(s.begin(), s.end(), greater<char>());
    sort(s.rbegin(), s.rend());
    cout<<s;
    
    // string s = "yukta";
    
    // sort(s.begin(), s.end());
    // cout<<s<<endl;
    
    // reverse(s.begin(), s.end());
    
    // cout<<s<<endl;
    
    // reverse(s.begin()+1, s.begin()+4);
    
    // cout<<s;
    
    // string s1 = "abcdef";
    // cout<< s1.substr(2,3); //starting index, length
    // cout<<s1.substr(1,100);
    
    // string s = "absd";
    // string t = "abs";
    
    // // cout<<(s>t)<<endl;
    // // cout<<(s<t)<<endl;
    // // cout<<(s>=t)<<endl;
    // // cout<<(s<=t)<<endl;
    // // cout<<(s==t)<<endl;
    // // cout<<(s!=t)<<endl;
    
    // // cout<<s.compare(t)<<endl;
    
    // // returns positive for greater, 0 for equal and negative for less
    
    // //copy strings
    
    // string x ;
    // x = s; //copy assignment operator
    // cout<<x<<endl;
    
    // //to search for substrings
    
    // cout<<s.find("ab")<<endl;
    // cout<<s.rfind("x")<<endl;
    // cout<<s.find("x")<<endl;
    // cout<<string::npos<<endl; //this is the highest value of size_t
    // if(s.find("x")==string::npos){
    //     cout<<" not found ";
    // }
    
    
    //to find character 
    
    // cout<<find(s, s.length(), 'a');
    
    
    
    // cout<<(s>t)<<endl;
    // cout<<(s>t)<<endl;
    
    // string s = "codin";
    // char ch = 'g';
    
    // s.push_back(ch);
    
    // cout<<s;
    
//   s.pop_back();
    // cout<<s;
    
    // string s = "abc";
    // string t = "def";
    
    // cout<<s+t<<endl;
    
    // cout<<s<<endl;
    // cout<<t<<endl;
    
    // string  c = s + t;
    // cout<<c<<endl;
    
    // string x = "hello";
    // string y = "world";
    
    // x.append(y);
    // cout<<x<<endl;
    
    // string k = "kello";
    // char p = 'c';
     
    // cout<< k+p <<endl;
    // cout<<k + string(1,p);
    
    
    
    // string str = "coding blocks";
    // cout<<str<<endl;
    
    // cout<<str.size()<<" "<<str.length()<<endl;
    
    // cout<<str.front()<<" "<<str.back()<<endl;
    
    // // char ch[] = {'c','o','d','i','n','g',' ','b','\0'};
    
    // // cout<<sizeof(ch);

    // string s1;
    // getline(cin,s1,'$');
    // //to read all the white spaces
    
    // //cin ignores leading white spaces and doesnt input non leading whitespaces
    
    // getline(cin>>ws,s1);
    
    
    // cout<<s1;
    
    
    return 0;
}