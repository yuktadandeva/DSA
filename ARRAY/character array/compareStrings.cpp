#include <iostream>
#include <cstring>
using namespace std;

int compareStrings(char str1[],char str2[]){
    int n = strlen(str1);
    int m = strlen(str2);
    
    int i = 0;
    int j = 0;
    
    while(str1[i]!='\0' and str1[i]!='\0'){
       if( str1[i]==str2[j] ){
           i++;
           j++;
       }else if(str1[i]>str2[j]){
           return 1;
       }else{
           return -1;
       }
    }
    if(str1[i]!='\0'){
        return 1;
    }else if(str2[j]!='\0'){
        return -1;
    }
    return 0;
}

int main() {
    
    char str1[] = "yukta";
    char str2[] = "yukta";
    
    if(compareStrings(str1, str2)==0){
        cout<<"str 1 is equal to str 2";
    }else if(compareStrings(str1, str2)==1){
        cout<<" str 1 is greater ";
    }else{
        cout<<"str 2 is greater";
    };
    return 0;
}

