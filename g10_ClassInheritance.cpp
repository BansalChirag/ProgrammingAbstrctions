#include<iostream>
using namespace std;

// top parent class
class Base
{
    private:
        int varPrivateB;
    protected:
        int varProtectedB;
    public:
        int varPublicB;

};

class Child:protected Base
{
    // no new features 
    public:
        Child()
        {
            varPublicB=15;
            varProtectedB=30;
        }
        int getProtectedElement()
        {
            return varProtectedB;
        }
};

int main()
{
    Child childobj;
    cout<<"Value of public varible:"<<childobj.varPublicB;
    cout<<"Value of protected varible:"<<childobj.getProtectedElement();
    return 0;
}