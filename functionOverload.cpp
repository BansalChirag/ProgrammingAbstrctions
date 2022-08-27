#include<iostream>
using namespace std;

void output(int,float);
void output(int*,float*);

int main(){

    int rollNo;
    float cgpa;
    cout<<"Enter Values : ";
    cin>>rollNo>>cgpa;
    output(&rollNo,&cgpa);
    cout<<"Output function call is over "<<endl;
    cout<<"Roll No : "<<rollNo<<endl;
    cout<<"CGPA : "<<cgpa<<endl;
    return 0;
}


// function to output the values using references
void output(int *r,float *c){ // address will be passed 
    cout<<"Inside output function with reference \n";
    *r = (*r) * 2;
    cout<<"Roll No : "<<*r<<endl;
    *c = (*c) * 2;
    cout<<"CGPA : "<<*c<<endl;

}

// function to output the values 
void output(int r,float c){
    cout<<"Roll No : "<<r<<endl;
    cout<<"CGPA : "<<c<<endl;
}