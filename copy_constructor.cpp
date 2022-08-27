#include<iostream>
using namespace std;


class temp{
    int a,b;
    public:
    temp(int a1,int b1){
        a = a1;
        b = b1;
        cout<<"default/overloaded contructor is called";
    }
    temp(temp &t){
        t.a = a;
        t.b = b;
        cout<<"copy contructor is called";

    }
};


int main(){

    temp obj1();
    temp obj2(2,3);
    temp tobj(obj2);
    return 0;
}