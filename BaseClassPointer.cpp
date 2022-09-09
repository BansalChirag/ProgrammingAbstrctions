#include<iostream>
using namespace std;

class Base{
    public:
    void func1(){
        cout<<"Func1 of Base"<<endl;
    }
};

class Derived:public Base{
    public:
    void func2(){
        cout<<"Func2 of Derived"<<endl;
    }
};



int main(){
    Derived d;
    Base b;
    // Derived *p = &b; // not allowed take the example of cuboid and reactangle
    Base *ptr = &d;
    ptr->func1();
    // p->func2();
    return 0;
}