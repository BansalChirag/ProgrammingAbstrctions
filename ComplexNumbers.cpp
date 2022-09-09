#include<iostream>
using namespace std;

class Complex{
    private :
    int real,img;
    public:
    Complex(int r = 0,int i = 0){
        real = r;
        img = i; 
    }
    Complex add(Complex c){
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }

    // operator overloading
    // Complex operator + (Complex c){
    //     Complex temp;
    //     temp.real = real + c.real;
    //     temp.img = img + c.img;
    //     return temp;
    // }

    friend Complex operator + (Complex c1,Complex C2);
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }

     friend ostream & operator<<(ostream&o,Complex c);
};

ostream & operator<<(ostream&o,Complex c){
     o<<c.real<<" + "<<c.img<<"i"<<endl;
     return o;
}

Complex operator + (Complex c1,Complex c2){
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main(){
    Complex C1(3,7);
    Complex C2(5,4);
    cout<<"Complex Number C1 : ";
    cout<<C1;
    cout<<"Complex Number C2 : ";
    cout<<C2;
    // C1.display();
    // Complex C3 = C1.add(C2);
    Complex C3 = C1 + C2;
    cout<<"Complex Number C3 : ";
    cout<<C3;
    // C3.display();
    return 0;
}