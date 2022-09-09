#include<iostream>
using namespace std;



int main(){
    string s0("Initial String");
    string s1;

    string s2(s0);// cooy Constructor called


    string s3;
    s3 = s0; // copy assignment operator
    string s4("A character sequence",5); //s4 will contain upto 4 characters

    string s5(10,'x'); // xxxxxxxxxx
    string s6 (s0.begin(), s0.begin()+7);


    string s7;

    // cout<<"Enter s1 : ";
    // cin>>s1; // will not take input after 1st spaceS
    cout<<"Enter s7 : ";
    getline(cin,s7); // will take complete line input
    cout<<"s0 : "<<s0<<endl;
    cout<<"s1 : "<<s1<<endl;
    cout<<"s2 : "<<s2<<endl;
    cout<<"s3 : "<<s3<<endl;
    cout<<"s4 : "<<s4<<endl;
    cout<<"s5 : "<<s5<<endl;
    cout<<"s6 : "<<s6<<endl;
    cout<<"s7 : "<<s7<<endl;


    // destructor
    // ~string(s2);

    // s7.replace()
    return 0;

}