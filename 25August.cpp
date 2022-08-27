#include<iostream>
using namespace std;

template<class T>

T add(T v1,T v2){
    return v1 + v2;
}

template<class T1>

class Sample{
    public:
    T1 a,b;
    Sample(){
        cout<<"Default Constructor Called!"<<endl;
        a = 0;
        b = 0;
    }
    Sample(T1 v3,T1 v4){
        cout<<"Overloaded Constructor Called!"<<endl;
        a = v3;
        b = v4;
    }
};


int main(){
    // int val1;
    // double val2;
    // val1 = add<int>(2,3);
    // val2 = add<double>(2.2,3.3);
    // cout<<val1<<" "<<val2;
    Sample<int> s1;
    cout<<s1.a<<" "<<s1.b;

    
    return 0;
}


