#include<iostream>
using namespace std;

class arithmetic{
    int a,b;
    public:
        arithmetic(int x = 0,int y = 0){
            a = x;
            b = y;
        }

        arithmetic operator+(const arithmetic& m){
            arithmetic add;
            add.a = this->a + m.a;
            add.b = this->b + m.b;
            return add;
        }
        void display(){
            cout << a<<" "<<b<<endl;
        }
};

int main(){
    arithmetic obj1(2,4);
    arithmetic obj2(2,3);

    arithmetic sum = obj1 + obj2;
    sum.display();
    return 0;
}