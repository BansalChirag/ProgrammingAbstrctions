#include<iostream>
using namespace std;



int main(){
    int a,b,result;
    cin>>a>>b;
    try{
        if(b == 0){
            // throw 'b'; // raise exception
            throw b; // raise exception
        }else{
            result = a/b;
            cout<<result;
        }    
    }
    catch(int x){
        cout<<"Division by zero error!"<<endl;
    }
    catch(char x){
        cout<<"Number cannot be divided by zero"<<endl;
    }
    catch(...){
        cout<<"Unhandled Exception"<<endl;
    }
    
    // cout<<result;
    return 0;
}