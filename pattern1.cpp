#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


void pattern2(int n){
    for(int i = 0;i<n;i++){
        for(int j = n;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}


// void pattern3(int n){
//     for(int i = 0;i<n;i++){
//         for(int j = n;j>=i;j--){
//             if(i == 0 || j == n || j==i){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
void pattern3(int n){
    // for(int i = n;i>=0;i--){
    //     for(int j = 0;j<=i;j++){
    //         if(i == n || j == 0 || j==i){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    for(int i = 0;i<n;i++){
        cout<<"*";
    } 
    cout<<endl;
    for(int i = 1;i<n;i++){
        for(int j = 0;j<i;j++){
            cout<<"*";
        }
        for(int spaces = 0;spaces<n-i;spaces++){
            cout<<" ";
        }
        for(int j = n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}





void pattern4(int n){
    for(int i = 0;i<n;i++){
        for(int spaces = 0; spaces<n-i;spaces++){
            cout<<" ";
        }
        for(int j = 0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


void pattern5(int n){
    for(int i = 0;i<n;i++){
        for(int spaces = 0;spaces <=i;spaces++){
            cout<<" ";
        }
        for(int j = n;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}


void pattern7(int n){
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


void pattern8(int n){
    for(int i = 5;i>=1;i--){
        for(int j = 1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


void pattern9(int n){
    
    for(int i = 1;i<=n;i++){
        for(int spaces = 0;spaces <= n- i;spaces++){
            cout<<" ";
        }
        int count = i;
        for(int j = 1;j<=i;j++){
            cout<<count<<"";
            count++;
        }
        int r = i;
        for(int j = 1;j<i;j++){
            cout<<r<<"";
            r++;
        }
        cout<<endl;
    }
}


void pattern10(int n){
    for(int i = 0 ; i < n;i++){
        for(int j = 0 ; j < n;j++){
            if(j == 0 || j == (n-1) ){
                cout<<"*";
            }else if(i == 0 || (i == n-1)){
                cout<<"*"; 
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void  pattern11(int n){
    for(int i = 1;i <=n;i++){
        for(int spaces = 0;spaces<n-i;spaces++){
            cout<<" ";
        }
        for(int j = 1;j<=i;j++){
            cout<<" "<<j;
        }
        cout<<endl;
    }
}


void pattern12(int n){
    for(int i = 1;i<=n;i++){
        for(int spaces = 0;spaces<=(n-i);spaces++){
            cout<<" ";
        }
        int k = i;
        for(int j = 1;j<=i;j++){
            cout<<k;
            k--;
        }
        int r = i;
        for(int p = 1;p<i;p++){
            cout<<r;
            r++;
        }
        cout<<endl;
    }
}


void pattern13(int n){
    for(int i = 1;i<=n;i++){
        for(int spaces = 1;spaces<=n-i;spaces++){
            cout<<" ";
        }
        for(int j = 1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = n;i>=1;i--){
        for(int spaces = 1;spaces<=n-i;spaces++){
            cout<<" ";
        }
        for(int j = 1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pattern13(n);
    return 0;
}