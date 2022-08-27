#include<iostream>
using namespace std;

struct person{
    string name;
    int day;
    int month;
    int year;
};

int main(){
    // person p1;
    // person p2;
    // person p3;
    // person p4;
    int n;
    // cout<<"How Many persons are there in the group";
    cin>>n;
    // int a[n];
    int as[n];
    int ak[n];
    string ns;
    int d;
    int m;
    int y;
    string a[n];
    string name;
    for(int i = 0;i<n;i++){
        // cout<<"Enter Person Name : ";
        // cin>>ns; 
        cin>>ns>>d>>m>>y;
        person p ;
        p.name = ns;
        p.day = d;
        p.month = m;
        p.year = y;
        a[i] = p.name;
        int age = 2022 - p.year;
        ak[i] = age;
    }
    int largest = INT_MIN;
    string large_person;
    for(int i = 0;i<n;i++){
        if(ak[i] > largest){
            largest = ak[i];
            large_person = a[i];
        }
    }
    int smallest = INT_MAX;
    string small_person;
    for(int i = 0;i<n;i++){
        if(ak[i] < smallest){
            smallest = ak[i];
            small_person = a[i];
        }
    }

    cout<<"Smallest person in the group is : "<<small_person;
    cout<<"largest person in the group is : "<<large_person;

    return 0;
}