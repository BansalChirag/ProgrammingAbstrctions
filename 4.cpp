#include<iostream>
using namespace std;


class complex{
    float real;
    int img;
    public:
        complex(float x = 0,int y = 0){
            real = x;
            img = y;
        }
    friend complex operator + (complex c1,complex c2);
    friend complex operator+(complex c1,float value);
};


complex operator+(complex c1, complex c2){
    complex result;
    result.real=c1.real+c2.real;
    result.img=c1.img+c2.img;
    return result;
}


complex operator+(complex c1, float value){
    complex result;
    result.real=c1.real + value;
    result.img=c1.img + value;
    return result;
}
// complex operator+(int value, complex c2){
//     complex result;
//     result.real = value + c2.img;
//     result.img = c2.img + value;
//     return result;
// }



int main(){
    complex c1(2,3.0);
    complex c2(5,3.0);
    complex c3 = c1+c2;
    complex c4 = c1 + 2;
    complex c5 = 20 + c1;
    
    return 0;
}


int main(){
    return 0;
}