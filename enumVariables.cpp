#include<iostream>
using namespace std;

    enum color{red = 5,blue=5};
    enum suit{heart ,diamond = 8,spade = 3,club };

int main(){

    // cout<<red<<" "<<blue;
    // typedef float ui;
    // ui x1,x2;
    // cin>>x1>>x2;
    // cout<<x1<<" "<<x2<<endl;
    // cout<<heart<<" "<<diamond<<" "<<spade<<" "<<club;


    // int var = 5;
    // char alpha = 'A';
    // void *ptr;
    // ptr = &var;
    // cout<<(int *)ptr<<endl;
    // cout<<*((int *)ptr)<<endl;
    // ptr = &alpha;
    // cout<<(char *)ptr<<endl;
    // cout<<*((char *)ptr)<<endl;


    char ** strptr;
    char *str = "Hello!";
    strptr = &str;
    free(str);
    cout<<*strptr;
    return 0;
}