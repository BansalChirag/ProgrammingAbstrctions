#include<iostream>
using namespace std;

class Base{
    public:
    int x;
    void show(){
        cout<<x<<endl;
    }
};

class Derived:public Base{
    public:
    int y;
    void display(){
        cout<<x<<" "<<y<<endl;
    }
};


class Rectangle{

    int length,breadth;
    public:
    Rectangle();
    Rectangle(int l,int b){
        length = l;
        breadth = b;
    }
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

class cuboid:public Rectangle{
    private:
    int height;
    public:
    cuboid(int l = 0,int b = 0,int h = 0){
        height = h;
        setLength(l);
        setBreadth(b);
    }
    int getHeight(){return height;}
    void setHeight(int h){height = h;}
    int volume(){
        return getLength()*getBreadth()*height;
    }
};


int main(){
    // Base b;
    // b.x = 25;
    // b.show();
    // Derived d;
    // d.x = 10;
    // d.y = 15;
    // d.show();
    // d.display();


    cuboid c(10,5,3);
    cout<<c.getLength()<<endl;
    cout<<c.getBreadth()<<endl;
    return 0;
}