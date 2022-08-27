#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    vector<int> v1;
    map<int,int> m;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    // v1.insert(v1.end(),4,100);
    vector<int> v2(v1);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(8);
    vector<int> v3(v2);
    // v3.push_back(9);
    // v3.push_back(10);
    // v3.push_back(11);
    // v3.push_back(12);
    for(int i = 0;i<v1.size();i++){
        m[v1[i]]++;
    }
    for(int i = 0;i<v2.size();i++){
        m[v2[i]]++;
    }
    for(int i = 0;i<v3.size();i++){
        m[v3[i]]++;
    }
    vector<int> ::iterator  itr;
    cout<<"Elements Of Vector V1 : ";
    for(itr = v1.begin();itr!=v1.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<"\nElements Of Vector V2 : ";

    for(itr = v2.begin();itr!=v2.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<"\nElements Of Vector V3 : ";
    for(itr = v3.begin();itr!=v3.end();itr++){
        cout<<*itr<<" ";
    }
    // for (auto i = m.begin(); i != m.end(); i++){
    //     cout<<"\nElements with frequency "<<i->first<<" : "<<i->second;
    // }
    cout<<"\ncommon Elements are :";
    for (auto i = m.begin(); i != m.end(); i++){
        if(i->second==3){
            cout<<i->first<<" ";
        }
        // cout<<"\nElements with frequency "<<i->first<<" : "<<i->second;
    }
    // cout<<endl<<v1.size();
    // cout<<endl<<v1.capacity();
    return 0;
}