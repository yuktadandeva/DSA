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
//pattern 7 - flipped valley
//pattern 8 - hollow square
//pattern 9 - hollow rhombus
//pattern 10 - hollow diamond 
//pattern 11 - x sign
}
































