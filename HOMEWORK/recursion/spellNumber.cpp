#include<iostream>
#include<vector>
using namespace std;

void spellNumber(int n, vector<string>& numbers){
    //base case
    if(n == 0){
        return;
    }

    //recursive case
    spellNumber(n/10, numbers);
    cout<<numbers[n%10]<<" ";
}

int main() {
    int n = 58860;

    vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    spellNumber(n, numbers);
    return 0;
}