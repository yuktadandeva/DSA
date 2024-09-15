#include <iostream>
using namespace std;
int sizeCharArray(char str2[]){
    int cnt = 0;
    for(int i = 0; str2[i]!='\0'; i++){
        cnt++;
    }
    return cnt;
}
int main() {
   
    char str[6] = {'a','b','c','d','\0'};
    cout<<str<<endl;
    
    char str2[] = "hello";
    cout<<sizeof(str2)<<endl;
    
    for(int i = 0; str2[i]!='\0'; i++){
        cout<<str2[i]<<" ";
    }
    cout<<endl;
    
    cout<<sizeCharArray(str2);
    
    return 0;
}

