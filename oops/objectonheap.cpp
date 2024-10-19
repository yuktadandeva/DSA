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
    
    customer* cptr = new customer("yukta", 20, 'f', 40000);
    cptr->print();
    
    customer* cptrd = new customer;
    cin>>cptrd->name>>cptrd->age>>cptrd->gender>>cptrd->credits;
    cptrd->print();
    
    return 0;
}