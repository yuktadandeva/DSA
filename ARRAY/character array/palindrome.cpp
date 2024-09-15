#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool checkPalindrome(char s[]){
    int i = 0;
    int j = strlen(s)-1;
    
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void checkPalindrome2(char s[]){
    char s2[101];
    strcpy(s2,s);
    reverse(s2,s2+strlen(s2));
    if(s2==s){
        cout<<"is palindrome";
    }else{
        cout<<"is not palindrome";
    }
}

int main() {

char s[] = "racecar";

// checkPalindrome(s)?cout<<"is palindrome"<<endl:cout<<"is not palindrome";

checkPalindrome2(s);
 
    return 0;
}

