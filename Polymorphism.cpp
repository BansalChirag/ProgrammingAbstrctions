#include<iostream>
using namespace std;

class Car{
    public:
    virtual void start(){
        cout<<"Car started"<<endl;
    }
};

class Innova:public Car{
    public:
    void start(){
        cout<<"Innova Started"<<endl;
    }
};

class Swift:public Car{
    public:
    void start(){
        cout<<"Swift Started"<<endl;
    }
};


int main(){
    Car *p = new Innova();
    p->start(); 
    return 0;
}