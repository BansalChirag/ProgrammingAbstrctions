#include<iostream>
using namespace std;

class A{
    public:
    int publicVal;
    private:
    int privateVal;
    protected:
    int protectedVal;
};


class B:public A{
    public:

    void setValProtected(int a){
        protectedVal = a;
    }
    int getVal(){
        return protectedVal;
    }
    void display(){
        cout<<"Value of publicVal : "<<publicVal;
    }
};

int main(){
    B obj;
    obj.publicVal = 5;
    obj.display();
    return 0;
}