#include <iostream>
using namespace std;

int main() {
    // int x ;
    // cout<<&x<<endl<<sizeof(&x)<<endl;
    
    // double y;
    // cout<<&y<<endl;
    
    // float z;
    // cout<<&z<<endl;

    // char u = 'A';
    // cout<<&u;
    
    // int x = 1010;
    // int * xptr =  &x;
    // cout<<*xptr<<endl;
    
    // char c = 'W';
    // char * cptr =  &c;
    // cout<<*cptr<<endl;
    
    // char ch = 'A';
    // int * chptr = (int *)&ch;
    
    // int x = 516;
    // char * xptr = (char*) &x;
    // cout<<*xptr<<endl;
        
    // cout<<chptr<<endl;
        
     int x = 1010;
     int * xptr =  &x;
     cout<<xptr<<endl;
    xptr = xptr + 2;
    cout<<xptr;
    return 0;
}