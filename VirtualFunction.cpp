#include<iostream>
using namespace std;

class Parent{
    public:
    virtual void display(){
        cout<<"Display of parent"<<endl;
    }
};


class child:public Parent{
    public:
    void display(){
        cout<<"Display of child"<<endl;
    }
};


int main(){
    Parent *p = new child();
    p->display();
    return 0;
}