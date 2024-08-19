// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int main() {
   // Online C++ compiler to run C++ program online
    int n;
    cin>>n;
    
    int max= INT_MIN;
    int min = INT_MAX;
    
    int i=1;
    while(i>=n){
        int x;
        cin>>x;
        if(x<min){
            min = x;
        }
        if(x>max){
            max=x;
        }
        i++;
    }
    cout<<"largest : "<<max;
    cout<<"smallest : "<<min;
    // int f0 = 0;
    // int f1 = 1;
    
    // int fn ;
    // if(n==0||n==1){
    //     cout<<" f"<<n<<" is : "<<n<< endl;
    // }else{
    //     int i =1;//2
    //     while(i<=n-1){ //i<=n
    //     fn = f0 + f1;
    //     f0 = f1;
    //     f1 = fn;
    //     i=i+1;
    // }
    // cout<<"f"<<n<<" is : "<<fn;
    // }
   
    
    // int sum=0;
    // while(n>0){
    //     int d = n%10;
    //     sum= sum+d;
    //     n=n/10;
    // }
    // cout<<"sum: "<<sum;
    // int revNum=0;
    // while(n>0){
    // int d=n%10;
    // revNum = revNum *10 + d;
    // n=n/10;
    // }
    // cout<<"reverse : "<<revNum<<endl;
    
    //scoping
    
    return 0;
}