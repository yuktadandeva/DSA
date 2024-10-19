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
    
    customer(const customer& c){
        name = c.name;
        age = c.age;
        gender = c.gender;
        credits = c.credits;
    }
    
  void print(){
        cout<<name<<endl;
        cout<<gender<<endl;
        cout<<age<<endl;
        cout<<credits<<endl;
}
};


int main() {
    
    customer c1("yukta", 20, 'f', 40000);
    customer c2(c1);
    
    customer c3;
    c3 = c2;
    
    c2.print();
    
    return 0;
}
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
    
    customer(const customer& c){
        name = c.name;
        age = c.age;
        gender = c.gender;
        credits = c.credits;
    }
    
  void print(){
        cout<<name<<endl;
        cout<<gender<<endl;
        cout<<age<<endl;
        cout<<credits<<endl;
}
};


int main() {
    
    customer c1("yukta", 20, 'f', 40000);
    customer c2(c1);
    
    customer c3;
    c3 = c2;
    
    c2.print();
    
    return 0;
}