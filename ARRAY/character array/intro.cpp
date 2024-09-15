#include <iostream>
#include <cstring>
using namespace std;
int sizeCharArray(char str2[]){
    int cnt = 0;
    for(int i = 0; str2[i]!='\0'; i++){
        cnt++;
    }
    return cnt;
}

void readStr(char str[]){
 int j = 0;
 char ch;
 while(true){
     ch = cin.get();
     if(ch=='\n'){
         break;
     }
     str[j] = ch;
     j++;
 }
 str[j] = '\0';
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
    
    cout<<strlen(str2)<<endl;
    cout<<sizeCharArray(str2)<<endl;
    
    char str3[101];
    cin>>str3;
    
    readStr(str3);
    cout<<str3;

    return 0;
}

