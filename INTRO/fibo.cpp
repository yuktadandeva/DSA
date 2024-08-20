#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;    
int f0 = 0;
int f1 = 1;

int fn ;
if(n==0||n==1){
    cout<<" f"<<n<<" is : "<<n<< endl;
}else{
    int i =1;//2
    while(i<=n-1){ //i<=n
    fn = f0 + f1;
    f0 = f1;
    f1 = fn;
    i=i+1;
}
cout<<"f"<<n<<" is : "<<fn;
}}