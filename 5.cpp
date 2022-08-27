#include <iostream>
using namespace std;

const int vsize =3;
class vector{
    int v[vsize];
    public:
    vector();
    vector(int* x);
    friend vector operator+(int a,vector b);
    friend vector operator+(vector a,int b);
    friend istream & operator>>(istream &, vector &);
    friend ostream & operator>>(ostream &, vector &);
};
vector::vector(){
    for(int i=0;i<vsize;i++)
    v[i]=0;
}
vector::vector(int* x){
    for(int i=0;i<vsize;i++)
    v[i]=x[i];
}
vector operator+(int a,vector b){
    vector c;
    for(int i=0;i<vsize;i++){
        c.v[i]=a + b.v[i];
    }
    return c;
}
istream & operator >>(istream &din,vector &b){
    for(int i=0;i<vsize;i++){
        din>>b.v[i];
    }
    return(din);
}
ostream & operator >>(ostream &dout,vector &b){
        dout<<"-->>"<<b.v[0];
        for(int i=0;i<vsize;i++){
            dout<<","<<b.v[i];
        }
        return(dout);
    }
     int x[vsize] = {2,4,6};
     int main(){
         vector m;
         vector n =x;
         cout<<"Enter the elements of vector m"<<"\n";
         cin>>m;
         cout<<"\nm:"<<m<<"\n";
         vector p,q;
         p=2+m;
         q=m+2;
        //  cout<<"\np:"<<p<<"\n";
        //  cout<<"\nq:"<<q<<"\n";
         return 0;
     }