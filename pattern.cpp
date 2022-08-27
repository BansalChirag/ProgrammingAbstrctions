#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i =0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}

void pattern2(int n){
    for(int i = n;i>0;i--){
        for(int j = i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}


void pattern3(int n){
    for (int i = 0;i<n;i++){
        for(int spaces = 0;spaces<n-i-1;spaces++){
            cout<<" ";
        }        
        for(int j = 0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


void pattern4(int n){
    for(int i = 0;i<n;i++){
           for(int spaces = 0;spaces<n-i-1;spaces++){
            cout<<" ";
        }        
        for(int j = 0;j<=i;j++){
            cout<<"*";
        }

        for(int j = i;j<2*i;j++){
            cout<<"*";
        }
        cout<<endl;
    }   

}



int main(){
    int n;
    cin>>n;
    // pattern1(n);
    // pattern2(n);
    pattern3(n);
    return 0;
}