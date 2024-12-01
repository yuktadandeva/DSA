#include<iostream>
#include<queue>

using namespace std;

class customer{
 
    public:
       int age;
       string name;
       int credits;
       
    customer( string name, int age, int credits){
        this->age = age;
        this->name = name;
        this->credits = credits;
    }
    
};

class customerAgeComp{
    public:
    
    bool operator()(customer a, customer b){
        if(a.age < b.age){
            return false;
        }
        
        return true;
    }
};
int main() {
    
    priority_queue<customer, vector<customer>, customerAgeComp> m;
    
    m.push(customer("rahul" ,20, 100));
    m.push(customer("parv" ,19, 350));
    m.push(customer("yukta" ,21, 250));
    m.push(customer("aditya" ,22, 300));
    m.push(customer("vaibhav" ,17, 1000));
    m.push(customer("dheeraj" ,28, 500));
    
    cout<< m.size() <<endl;
    
    while(!m.empty()){
        customer c = m.top();
        m.pop();
        cout<<c.name<<" "<<c.age<<" "<<c.credits<<endl;
    }
    cout<<endl;
    
    cout<<m.size();
    
    return 0;
}
