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

void copyStrings(char s1[], char s2[]){
    int i = 0;
    int j = 0;
    
    while(s1[i]!='\0'){
        s2[j] = s1[i];
        i++;
        j++;
    }
    
    s2[j] = '\0';
}

int main() {
    
    char s1[] = "dandeva";
    char s2[] = "yukta" ;
    
    copyStrings(s1, s2);
 
   cout<<s2;
    return 0;
}

