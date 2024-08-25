#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    
    //pattern 4 - pyramid right face
    //upper triangle
    int m=n-n/2;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //lower triangle
    for(int i=1;i<=m-1;i++){
        for(int j=1;j<=m-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    //pattern 3 - star diamond
    
    
    //upper triangle
    for(int i=1;i<=m;i++){
        // print spaces
        for(int j=1;j<=m-i;j++){
            cout<<"  ";
        }
        // print odd stars
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
     
    //lower triangle
    for(int i=1;i<=m-1;i++){
        // print spaces
        for(int j=1;j<=i;j++){
            cout<<"  ";
        }
        // print odd stars
        for(int j=1;j<n-2*i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    // pattern 4 - hollow diamond
    cout<<endl<<endl;
    //upper hollow
     for(int i=1;i<=m;i++){
         
        if(i==1){
        for(int j=1;j<=n;j++){
             cout<<"* ";
        }
        cout<<endl;
           continue;
        }
         for(int j=1;j<=m-(i-1);j++){
    
             cout<<"* ";
         }
         
         for(int j=1;j<=2*(i-1)-1;j++){
             cout<<"  ";
         }
         
         for(int j=1;j<=m-(i-1);j++){
             cout<<"* ";
         }
         
         cout<<endl;
     }
     
     
     //lower hollow
     for(int i=1;i<=m-1;i++){
          
        if(i==m-1){
        for(int j=1;j<=n;j++){
             cout<<"* ";
        }
        cout<<endl;
           continue;
        }
         for(int j=1;j<=i+1;j++){
             cout<<"* ";
         }
         
         for(int j=1;j<=2*m-2*(i+1)-1;j++){
             cout<<"  ";
         }
         for(int j=1;j<=i+1;j++){
             cout<<"* ";
         }
         
       
         cout<<endl;
     }









    
    // //pattern 1 char inverted right angled triangle
    // char c='A';
    // for(int i=0;i<=n;i++){
        
    //     for(int j=1;j<=n-i;j++){
    //         cout<<c<<" ";
    //         c++;
    //     }
    //     cout<<endl;
    //     c='A';
    // }
    
    // //pattern 2 extra char in pattern 1

    // for(int i=0;i<=n;i++){
    //     //for i=1 then j till n-i+1
     
    //     for(int j=1;j<=n-i;j++){
    //         cout<<c<<" ";
    //         c++;
    //     }
    //     c=c-1;
    //     for(int j=1;j<=n-i;j++){
    //         cout<<c<<" ";
    //         c--;
    //     }
    //     cout<<endl;
    //     c='A';
    // }
    
    
    
    return 0;
}