#include<iostream>
using namespace std;

template<class T>

class Calculator{
    public:
    T a,b;
    Calculator(){
        a = 0;
        b = 0;
    }
    T add(T val1,T val2){
        return val1 + val2;
    }
    T subtract(T val1,T val2){
        return val1 - val2;
    }
    T multiply(T val1,T val2){
        return val1 * val2;
    }
    T division(T val1,T val2){
        try{
            if(val2==0){
                throw val2;
                // cout<<"Zero Division Error"<<endl;    
            }else{
                return val1 / val2;
            }
        }
        catch(int){
            cout<<"Zero Division Error"<<endl;
        }
    }

};



int main(){
    Calculator<int> c1;
    cout<<c1.add(2,3)<<endl;
    cout<<c1.subtract(2,3)<<endl;
    cout<<c1.multiply(2,3)<<endl;
    cout<<c1.division(2,0)<<endl;
    return 0;
}