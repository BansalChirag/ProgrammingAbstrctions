#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // ofstream file1("sample1.txt");
    // string name;
    // cout<<"Enter your Name : ";
    // cin>>name;
    // file1<<"My Name is : "<<name ;
    // file1.close(); 

    ifstream in("sample1.txt");
    string st,st2;
    while(in.eof() == 0){
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}