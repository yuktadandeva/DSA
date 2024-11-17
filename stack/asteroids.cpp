#include <iostream>
#include <stack>
using namespace std;

vector<int> asteroidCollision(vector<int> &asteroids){
    stack<int> s;
    
    for(int ast: asteroids){
    if(ast<0 and !s.empty() and s.top()>0){
          //collisions will happen
          
          bool flag = true;
          while(!s.empty() and s.top()>0){
              if(abs(ast)>s.top()){
                  s.pop();
              }else if(s.top()> abs(ast)){
                  flag = false;
              }else{
                  flag = false;
                  s.pop();
                  break;
              }
          }
          
          if(flag){
              s.push(ast);
          }
    }else{
        s.push(ast);
    }
    
    vector<int> ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    
    reverse(ans.begin(), ans.end());
    
    return ans;
}

int main() {
    vector<int> asteroids = [7,3,-4, 5 ,2,-8];
    
    
    return 0;
}