#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Default of Base called"<<endl;
    }
    Base(int x){
        cout<<"Param of Base"<<endl;
    }
};

class Derived:public Base{
    public:
    Derived(){
        cout<<"Default of Derived called"<<endl;
    }
    Derived(int x){
        cout<<"Param of Derived"<<endl;
    }

    Derived(int x,int a):Base(a){
        cout<<"Param of Derived : "<<a<<endl;
    }
};


int main(){
    Derived d; 
    // default of base class will be executed  first
    // default of derived class will be called first
    // there is a differerne between called and executed  


    Derived d1(10); 
    // default of base class will be called  first
    // param of derived class will be called  


    Derived d2(20,10); 
    // param of base class will be called  first
    // param of derived class will be called  
    return 0;
}