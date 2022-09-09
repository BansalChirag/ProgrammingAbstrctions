#include<iostream>
using namespace std;

class Rectangle{

    int length,breadth;
    public:
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
    void setLength(int l){ // mutators
        if(l>=0){
            length = l;
            return;
        }
        cout<<"Length cannot be negative it will be set to zero"<<endl;
        length = 0;
    }
    int getLength(){ // accessers
        return length;
    }
    void setBreadth(int b){ // mutators
        if(b>=0){
            breadth = b;
            return;
        }
        cout<<"Breadth cannot be negative it will be set to zero"<<endl;
        breadth = 0;
    }
    int getBreadth(){ // accessers
        return breadth;
    }
};



int main(){
    Rectangle r; // objects are created in stack
    Rectangle *p;
    p = &r;
    p->setBreadth(-10);
    // cout<<p->getBreadth();
    // p->setLength(5);
    // cout<<p->area()<<endl;
    Rectangle *q = new Rectangle(); // to create object in heap using pointers
    return 0;
}