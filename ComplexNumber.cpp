#include<iostream>
using namespace std;

class ComplexNumber{
    int real,imamginary;
    public:
    ComplexNumber(int real,int imaginary){
        this->real = real;
        this->imamginary = imaginary;
    }
    void print(){
        if(imamginary<0){
            cout<<real<<imamginary<<"i"<<endl;;
        }else{
            cout<<real<<"+"<<imamginary<<"i"<<endl;;
        }
    }
    void add(ComplexNumber const &c){
        real = real + c.real;
        imamginary = imamginary + c.imamginary;  
    }

    int multiply(ComplexNumber const &c){
        real = real * c.real;
        imamginary = imamginary * c.imamginary;
        imamginary = -imamginary;
        return  (real + imamginary);
    }
};


int main(){
    int real1,imaginary1,real2,imaginary2;
    cin>>real1>>imaginary1;
    cin>>real2>>imaginary2;
    ComplexNumber c1(real1,imaginary1);
    ComplexNumber c2(real2,imaginary2);
    cout<<"Complex Number c1 is : ";
    c1.print();
    cout<<"Complex Number c2 is : ";
    c2.print();
    // c1.add(c2);
    // c1.print();
    // c2.print();

    cout<<c1.multiply(c2);
    // c1.print();
    // c2.print();
    return 0;
}