// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

bool myLenCmp(string a, string b){
    if(a.length() < b.length()){
        return true;
    }
    return false;
}

int main(){
   string arr[] = {"yukta", "dandeva","yuk","abs"};
   int n = 4;
   sort(arr, arr+n, myLenCmp);
   
   for(int i =0; i<=n-1; i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}