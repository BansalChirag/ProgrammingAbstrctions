#include<iostream>
#include<cstring>
using namespace std;

class str{
    char * p;
    int len;
    public:
    str(){
        len = 0;
        p = 0; 
    }
    int strlen(string x){
        int n = x.length();
        return n;
    }
    str(const char*t){
        len = strlen(t);
        p = new char[len+1];
        strcpy(p,t);
    }

    str(const str &s){
        len = s.len;
        p  = new char[len+1];
        strcpy(p,s.p);
    }
    friend str operator + (const str&s1,const str &s2);
    friend int operator <= (const str&s1,const str &s2);
    void printStr(){
        cout<<"\nThe string is ::::>>"<<p;
    }
};


str operator + (const str & s1,const str & s2){
    str temp;
    temp.len = s1.len + s2.len;
    temp.p = new char[temp.len+2];
    strcpy(temp.p,s1.p);
    strcat(temp.p," ");
    strcat(temp.p,s2.p);
    return temp;
}


int operator <= (const str &s1,const str &s2){
    int m1 = s1.len,m2 = s2.len;
    if(m1<=m2){
        return true;
    }
    return false;
}   



int main(){
    str s1="C Plus Plus";
    str s2="Harman";
    str s3="Track";
    str copy1,copy2,copy3;
    copy1=s1;
    copy2=s2;
    copy3=s1+s3;
    copy1.printStr();
    copy2.printStr();
    copy3.printStr();
    char *c1 = (char*)"abcdef";
    char *c2 = (char*)"abcdefs";
    // str s1(c1),s2(c2);
    // if(s2 <= s1){
    //     cout << "less\n";
    // } else {
    //     cout << "not less\n";
    // }
    return 0;
}