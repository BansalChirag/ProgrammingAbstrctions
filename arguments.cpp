#include<iostream>
using namespace std;

template <class T>

T add(T a,T b,T c=0,T d=0,T e=0){
    return a + b + c + d + e;
}

int main(){
    cout<<add<float>(1,2.2)<<endl;
    cout<<add<int>(1,2,3)<<endl;
    cout<<add<int>(1,2,3,4)<<endl;
    cout<<add<int>(1,2,3,4,5)<<endl;
}