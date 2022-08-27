#include<iostream>
using namespace std;


// int div1(int a,int b){
//     try{
//         if(b == 0){
//             throw b;
//         }else{
//             return a / b;
//         }
//     }
//     catch(int x){
//         cout<<"Zero Divsion Error!"<<endl;
//         return -1;
//     }
// }

// int main(){
//     int a,b,r;
//     cin>>a>>b;
//     r = div1(a,b);
//     cout<<r;
//     return 0;
// }


// int div1(int a,int b){
//     return a/b;
// }

// int main(){
//     int a,b,r;
//     cin>>a>>b;
//     try{
//         catch div1(a,b);
//     }
//     catch(char *msg){
//         cout<msg;
//     }
//     r = div1(a,b);
//     cout<<r;
//     return 0;
// }





// Stack unwinding : applying try catch block in main function and then applying try catch in the function 
//   which is called in try catch block of mainn

// int div1(int a,int b){
//     try{
//         if(b == 0){
//             throw b;
//         }else{
//             return a / b;
//         }
//     }
//     catch(int x){
//         cout<<"Zero Divsion Error!"<<endl;
//         throw;
//     }
// }

// int main(){
//     int a,b,r;
//     cin>>a>>b;
//     try{
//         r = div1(a,b);
//         cout<<r;
//     }
//     catch(int){
//         cout<<"Exception occured"<<endl;;
//     }
//     return 0;
// }


void display(int n){
    try{
        throw(n);
    }
    catch(int){
        cout<<"Zero Occured in denominator"<<endl;
        throw;
    }
}


int div1(int a,int b){
    try{
        if(b == 0){
            display(b);
        }else{
            return a / b;
        }
    }
    catch(int x){
        cout<<"Zero Divsion Error!"<<endl;
        throw;
    }
}

int main(){
    int a,b,r;
    cin>>a>>b;
    try{
        r = div1(a,b);
        cout<<r;
    }
    catch(int){
        cout<<"Exception occured"<<endl;;
    }
    return 0;
}