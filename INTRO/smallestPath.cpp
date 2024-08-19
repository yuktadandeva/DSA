// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char ch;
    
    int x = 0;
    int y = 0;
    
    while(true){
        ch = cin.get();
        if( ch == '\n'){
            break;
        }
        if(ch == 'N'){
            y++;
        }else if(ch == 'S'){
            y--;
        }else if(ch == 'E'){
            x++;
        }else if(ch == 'W'){
            x--;
        }
    }
    
    cout<<"destination: "<<"("<<x<<","<< y <<")"<<endl;
    
    if(x>0){
        for(int i=1; i<=x;i++){
            cout<<"E ";
        }
    }
    if(y>0){
        for(int i=1;i<=y;i++){
            cout<<"N ";
        }
    }
    if(y<0){
        for(int i=1;i<= abs(y);i++){
            cout<<"S ";
        }
    }
    if(x<0){
        for(int i=1;i<=abs(x);i++){
            cout<<"W ";
        }
    }
    
    
    
    // int u,l,s = 0;
    // int w= 0;
    // int d = 0;
    
    // while(true){
    // ch = cin.get();
    
    // if(ch == '$'){
    //     break;
    // }
    // if(ch<='Z' and ch>= 'A'){
    //     u++;
    // }else if(ch<= 'z' and ch>='a'){
    //     l++;
    // }else if(ch<= '9' and ch>='0'){
    //     d++;
    // }else if(ch == '\n' or ch==' ' or ch== '\t'){
    //     w++;
    // }else{
    //     s++;
    // }
    // }
    
    // cout<<"upper case : "<<u<<" "<<"lower case : "<<l<<" "<<"white spaces : "<<w<<" "<<"digits : "<<d<<" "
    // <<"special : "<<s;
    
    // int count = 0;
    // while(true){ 
    // //   cin >> ch;  //ignores white spaces (' ', '\n', '\t')
        
    //     ch = cin.get(); // to read spaces 
        
    //   if(ch == '$'){
    //       break;
    //   }
    //   count ++;
    // }
    
    // cout<<"count is : "<<count;
    return 0;
}