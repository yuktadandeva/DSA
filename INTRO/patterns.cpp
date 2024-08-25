#include <iostream>
using namespace std;

int main() 
{
//pattern 1 - line
int n;
cin>>n;

int i=1;
while(i<=n){
  cout<<"* ";
  i=i+1;
}

cout<<endl<<endl;

//pattern 2 - square
i=1;
while(i<=n){
  int j=1;
  while(j<=n){
    cout<<"* ";
    j=j+1;
  }
  cout<<endl;
  i=i+1;
}

cout<<endl<<endl;
// pattern 3 - right angled triangle

i=1;
while(i<=n){
  int j=1;
  while(j<=i){
    cout<<"* ";
    j=j+1;
  }
  cout<<endl;
  i=i+1;
}
cout<<endl<<endl;
//pattern 3 - flipped right angled triangle
i=1;
while(i<=n){
  int j=1;
  while(j<=n-i){
    cout<<"  ";
    j=j+1;
  }
  j=1;
  while(j<=i){
    cout<<"* ";
    j=j+1;
  }
  cout<<endl;
  i=i+1;
  
}
cout<<endl<<endl;
// pattern 4 - pyramid

i=1;
while(i<=n){
  int j=1;
  while(j<=n-i){
    cout<<"  ";
    j=j+1;
  }
  j=1;
  while(j<=2*i-1){
    cout<<"* ";
    j=j+1;
  }
  cout<<endl;
  i=i+1;
}

//pattern 4- flipped pyramid
cout<<endl<<endl;
i=n;
while(i>=1){
  int j=1;
  while(j<=n-i){
    cout<<"  ";
    j=j+1;
  }
  j=1;
  while(j<=2*i-1){
    cout<<"* ";
    j=j+1;
  }
  cout<<endl;
  i=i-1;
}

//pattern 4- rhombus
cout<<endl<<endl;
i=1;
while(i<=n){
  int j=1;
  while(j<=n-i){
    cout<<" ";
    j=j+1;
  }
  j=1;
  while(j<=n){
    cout<<"* ";
    j=j+1;
  }
  cout<<endl;
  i=i+1;
}
cout<<endl<<endl;
//pattern 5 - diamond
i=1;
while(i<=n){
  int j=1;
  while(j<=n-i){
    cout<<"  ";
    j=j+1;
  }
  j=1;
  while(j<=2*i-1){
    cout<<"* ";
    j=j+1;
  }
  cout<<endl;
  i=i+1;
}
i=1;
while(i<=n-1){
  int j=1;
  while(j<=i){
    cout<<"  ";
    j=j+1;
  }
  j=1;
  while(j<=2*n-2*i-1){
cout<<"* ";
j=j+1;
  }
  cout<<endl;
  i=i+1;
}

//pattern 6 - valley
cout<<endl<<endl;
i=1;
while(i<=n){
  int j=1;
  if(i==n){
    while(j<=2*n-1){
      cout<<"* ";
      j=j+1;
    } 
  }else{
    j=1;
  while(j<=i){
    cout<<"* ";
    j=j+1;
  }
  j=1;
  while(j<=2*n-2*i-1){
    cout<<"  ";
    j=j+1;
    
  }
  j=1;
  while(j<=i){
    cout<<"* ";
    j=j+1;
  }
  }
  
  
  cout<<endl;
  i=i+1;
}
//pattern 7 - flipped valley
cout<<endl<<endl;
i=1;
while(i<=n){
  int j=1;
  if(i==1){
    while(j<=2*n-1){
      cout<<"* ";
      j=j+1;
    }
  }else{
     j=1;
  while(j<=n-(i-1)){
    cout<<"* ";
    j=j+1;
  }
  j=1;
  while(j<=2*(i-1)-1){
    cout<<"  ";
    j=j+1;
  }
  j=1;
  while(j<=n-(i-1)){
    cout<<"* ";
    j=j+1;
  }
  }
  cout<<endl;
  i=i+1;
  
 
}
//pattern 8 - hollow square
cout<<endl<<endl;
i=1;
while(i<=n){
  int j=1;
  if(i==1 || i==n){
  while(j<=n){
    cout<<"* ";
    j=j+1;
  }
  }else{
    j=1;
   
    while(j<=n){
       if(j==1||j==n){
     cout<<"* ";
    }else{
     cout<<"  ";
    }
      j=j+1;
    }
  }
  cout<<endl;
  i=i+1;
}
//pattern 9 - hollow rhombus
cout<<endl<<endl;
i=1;
while(i<=n){
  int j=1;
 
  while(j<=n-i){
    cout<<"  ";
    j=j+1;
  }
  j=1;
  while(j<=n){
     if(i==1|| i==n||j==n||j==1){
      cout<<"* ";
     }else{
           cout<<"  ";
     }

    j=j+1;
  }
  cout<<endl;
  i=i+1;
}
//pattern 10 - hollow diamond 
cout<<endl<<endl;
i=1;
while(i<=n){
  int j=1;
  while(j<=n-i){
    cout<<"  ";
    j=j+1;
  }
  j=1;
  while(j<=2*i-1){
    if(j==1||j==2*i-1){
    cout<<"* ";
    }else{
      cout<<"  ";
    }
    j=j+1;
  }
  cout<<endl;
  i=i+1;
}

i=1;
while(i<=n-1){
  int j=1;
  while(j<=i){
    cout<<"  ";
    j=j+1;
  }
  j=1;
  while(j<=2*n-2*i-1){
    if(j==1|| j==2*n-2*i-1){
      cout<<"* ";
    }else{
      cout<<"  ";
    }
    j=j+1;
  }
  cout<<endl;
  i=i+1;
}
//pattern 11 - x sign
//pattern 12 - char flipped right angle triangle
char c='A';
    for(int i=0;i<=n;i++){
        
        for(int j=1;j<=n-i;j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
        c='A';
    }
    
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
    
    
    
}
































