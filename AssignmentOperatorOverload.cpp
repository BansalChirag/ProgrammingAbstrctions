#include<iostream>
using namespace std;

class Distance{
    int feet;
    int inches;
    public:
    Distance(){
        feet = 0;
        inches = 0;
    }
    Distance(int f,int i){
        feet = f;
        inches = i;
    }

    Distance (const Distance&D){
        cout<<"Copy Constructor is called"<<endl;
        feet = D.feet;
        inches = D.inches;
    }


    void operator = (const Distance &D){
        feet = D.feet;
        inches = D.inches;
    }
    void displayDistance(){
        cout<<feet<<" feets "<<inches<<" inches"<<endl;
    }
};



int main(){
    Distance D1(5,4),D2(2,3);
    cout<<"First Distance : ";
    D1.displayDistance();
    cout<<"Second Distance : ";
    D2.displayDistance();
    D1 = D2;
    cout<<"First Distance : ";
    D1.displayDistance();
    // Distance D3 = D1;
    Distance D3(D2);
    D3.displayDistance();
    return 0;
}