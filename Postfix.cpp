#include<iostream>
using namespace std;


class num{
    int x;
    public:
    num(){
        x = 0;
    }
    void operator++(){
        cout<<"Prefix function is called ";
        x = x + 1;

    }
    void operator++(int a){
        cout<<"Postfix function is called ";
        x = x + 1;
    }
    void print(){
        cout<<"Value of x : "<<x<<endl;
    }
};


int main(){
    num n;
    n.print();
    ++n;
    n.print();
    n++;
    n.print();
    return 0;
}

