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
        cout<<"inside parameterized constr"<<endl;
    }
       
   c
};

void printInfo(customer c){
    cout<<c.name<<endl;
    cout<<c.gender<<endl;
    cout<<c.age<<endl;
    cout<<c.credits<<endl;
}

int main() {
    
    customer c("yukta", 20, 'f', 40000);
    // customer c1;
    // c1.name = "yukta";
    // c1.age = 20;
    // c1.gender = 'f';
    // c1.credits = 499;
    
    c.print();
    customer c1;
      c1.print();
    
    // printInfo(c1);
    
//     customer c2;
//     cin>>c2.name>>c2.age>>c2.gender>>c2.credits;
    
//   printInfo(c2);
    
    return 0;
}