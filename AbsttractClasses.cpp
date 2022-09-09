#include<iostream>
using namespace std;


// class having pure virtual function is called abstrart class


class Base{
    public:
    void func1(){
        cout<<"Base func1"<<endl;
    }
    virtual void func2() = 0; /// pure virtual function
};

class Derived{
    public:
    void func2(){
        cout<<"Derived Func2"<<endl;
    }
};


int main(){
    Base *p; // true
    // Base b; // not allowed
    return 0;
}