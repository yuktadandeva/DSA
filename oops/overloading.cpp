#include <iostream>
using namespace std;

class customer{
    public:
        string name;
        int age;
        char gender;
        double credits;
    customer(string n = "", int a = 0, char g = 'f', double c = 0){
        name = n;
        age = a;
        gender = g;
        credits = c;
    }
    
    bool operator>(const customer& c){
        return age > c.age;
}

int operator + (const customer& c){
    return age+c.age;
}
};


int main() {
    
    customer c1("yukta", 20, 'f', 40000);
    customer c2("aaa", 23, 'f', 40000);
    
    c1>c2?cout<<"c1>c2"<<endl:cout<<"c1<c2"<<endl;
    cout<<c1+c2;
   

    
    return 0;
}