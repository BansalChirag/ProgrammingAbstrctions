#include<iostream>
#include<algorithm>

using namespace std;


bool compare(int a,int b){
    return a > b;
}

int main(){
    int arr[] = {1,10,11,9,100};
    int n = sizeof(arr) / sizeof(int);
    int key = 11;
    auto it = find(arr,arr+n,key);

    bool present = binary_search(arr,arr+n,key);
    int index = it - arr;
    if(index ==n){
        cout<<"not present"<<endl;
    }else{
        cout<<index<<endl;
    }


    // to get the index of element

    auto lb = lower_bound(arr,arr+n,40); ///>=key
    cout<<"lower bound of 40 is "<<lb-arr;
    auto  ub = upper_bound(arr,arr+n,40); // > key first element that is stricly greater than key
    cout<<"lower bound of 40 is "<<ub-arr;
    cout<<"Frequency of 40 is "<<ub-lb<<endl;


    //sorting
    sort(arr,arr+n,compare);


    // pair
    pair<int,char> p;
    p.first = 10;
    p.second = 'B';

    // another way
    pair<int,char> p2(p);
    cout<<p2.first<<endl;
    cout<<p2.second<<endl;

    pair<int,string>p3 = make_pair(100,"Audi");
    cout<<p3.first<<" "<<p3.second<<endl;


    int a,b;
    cin>>a>>b;
    pair<int,int> p4 = make_pair(a,b);

    pair<pair<int,int>,string > car;
    car.second = "Audi";
    car.first.first = 10;
    car.first.second = 20;




    return 0;
}