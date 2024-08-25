#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    int d;
    cin>>d;
    
    double ans = 0;
    while(ans*ans<=n){
        ans = ans +1;
    }
    
    int i=0;
    double inc=0.1;
    
    while(i<=d){
        while(ans*ans<=n){
            ans = ans + inc; 
        }
        ans = ans - inc;
        inc = inc/10;
        i++;
    }
    
    cout<<ans<<endl;
    
    return 0;
}