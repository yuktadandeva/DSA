#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    //pattern 1 - column number right triangle 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl<<endl;
    
    // pattern 2 - number count right triangle 
    int count= 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    
    cout<<endl<<endl;
    
    //pattern 3 - 0/1 flip right triangle
    
    int num;
    for(int i=1;i<=n;i++){
        
        //  if(i%2==0){
        //         num = 0;
        //     }else{
        //         num = 1;
        //     }

        //shorthand 
        
        num = i%2==0? 0:1;
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            //for flipping 0-1
           if(num==0){
               num =1;
           }else{
               num = 0;
           }
           
           //num = 1- num;
           //num = !num;
           
            
            
            
            
            // if(flag==true){
            //     cout<<1<<" ";
            //     flag = false;
            // }else{
            //     cout<<0<<" ";
            //     flag= true;
            // }
        }
     
        cout<<endl;
    }
    
    cout<<endl<<endl;
    
    //pattern 4 - number pyramid 
    int count =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        
        for(int j=i-1;j>=1;j--){
            cout<<count-2<<" ";
            count--;
              // we can do starting with 2i-2 till i - 1 for printing extra numbers in decreasing order
        }
        cout<<endl;
    }
            
        //pattern 5 - number count flipped right triangle 
        
            
        int count = 1;
        for(int i = 1;i<=n;i++){
            
        for(int j = 1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=i; j<=2*i-1;j++){
            cout<<j<<" ";
             //can also use num with initialization to i
        }
        cout<<endl;
        }
    

    
    // float x= n/1000.0;
    // cout<<x;
    // int sum= 0;
    // while(true){
    // int dec=n*10;
    // int d= int(n);

    // sum = sum+d;
    // n= n-dec;
    // if(n==0){
    //     break;
    // }
    // }
    // cout<<sum;
    return 0;
}