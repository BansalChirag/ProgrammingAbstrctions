#include<iostream>
using namespace std;




int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    int sum = 0,sum_row = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            sum_row += a[i][j];
        }
        if(sum_row % 3!=0 && sum_row % 5 != 0 ){
            cout<<"row sum should be multiple of 3 and 5 ";
            break;
        }
        sum = sum + sum_row;
        if(sum < 300){
            cout<<"Sum should not be less than 300";
        }
    }
    return 0;
}