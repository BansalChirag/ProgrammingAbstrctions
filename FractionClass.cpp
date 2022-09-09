#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Fraction{
    private:
    int numerator,denominator;
    public:
    Fraction(int numerator,int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void print(){
        // cout<<this->numerator<<"/"<<this->denominator<<endl;
        cout<<numerator<<"/"<<denominator<<endl;
    }

    // void add(Fraction f){

        // Fraction f = main->f basically here copy constructor is called


    void add(Fraction const &f){
        // & operator is used to avoid copying as it will pass the adress of fraction class directly
        // const word is used to avoid change of fraction class
        // int lcm = this->denominator*f.denominator;
        int lcm = denominator*f.denominator;
        numerator = (lcm / denominator)*numerator + (lcm / f.denominator)*f.numerator;
        denominator = lcm;
        simplify();
    }

    void simplify(){
        int gcd = 1;
        int j = min(this->numerator,this->denominator);
        for(int i = 2;i<j;i++){
            if(this->numerator % i == 0 && this->denominator % i == 0){
                gcd = i;
            }
        }
        // this keyword  is optional
        numerator = numerator / gcd;
        denominator = denominator / gcd;
    }

    void mulitply(Fraction const&f){
        numerator = numerator*f.numerator;
        denominator = denominator*f.denominator;
        simplify();
    }
};


int main(){

    Fraction f1(10,2);
    Fraction f2(15,4);
    // f1.add(f2);
    f1.print();
    f2.print();
    f1.mulitply(f2);
    f1.print();
    f2.print();
    return 0;
}