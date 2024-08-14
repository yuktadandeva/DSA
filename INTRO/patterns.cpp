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
}
































