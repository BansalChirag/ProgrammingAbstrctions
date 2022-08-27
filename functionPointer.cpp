#include<iostream>
using namespace std;

int add(int f,int s){
    return f + s;
}

int sub(int f,int s){
    return f - s;
}

// int add1(int f,int s,int k){
//     return f + s + k;
// }


// int operation1(int x,int y,int z,int (*function)(int,int,int)){
//     int n;
//     n = (*function)(x,y,z);
//     return n;
// }

int operation(int x,int y,int (*function)(int ,int)){
    int g;
    g = (*function)(x,y);
    return g;
}





// int main(){
//     int a = 9,b = 6,c = 9;
//     cout<<"\n Add : "<<operation1(a,b,c,add1);
//     // cout<<"\n Sub : "<<operation(a,b,sub);
//     return 0;
// }


// int main(){
//     int a = 9,b = 6;
//     int (*diff)(int,int) = sub;
//     cout<<operation(a,b,diff);
//     return 0;
// }


int main(){
    int a = 9,b = 6;
    int (*functionCalls[])(int,int) = {add,sub};
    cout<<"\n Add :" <<(*functionCalls[0])(a,b);
    cout<<"\n Add :" <<(*functionCalls[1])(a,b);
    return 0;
}





