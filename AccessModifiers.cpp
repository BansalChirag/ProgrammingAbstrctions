#include<iostream>
using namespace std;

class Base{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void funBase(){
        a = 10;
        b = 20;
        c = 30;
    }
};

class Derived:Base{
    public:
    void funDerived(){
        // a = 1; //not accessible
        b = 2;
        c = 3;

    }
};


int main(){
    return 0;
}