#include<iostream>
using namespace std;

class Rectangle{
    int width,height;
    public:
    Rectangle(){}
    Rectangle(int x,int y):width(x),height(y){}
    int area(){
        return height*width;
    }
    friend Rectangle duplicate(const Rectangle&);
    friend Rectangle compare(const Rectangle&,const Rectangle &);
};
Rectangle duplicate(const Rectangle& param){
        Rectangle res;
        res.width = param.width;
        res.height = param.height;
        return res;
}

Rectangle compare(const Rectangle& b1, const Rectangle & b2){
    if(b1.width == b2.width && b1.height == b2.height){
        cout<<"b1 and b2 are equal"<<endl;
        return b1;
    }
    if(b1.width > b2.width || b1.height > b2.height){
        cout<<"b1 is bigger."<<endl;
        return b1;
    }
    else{
        cout<<"b2 is bigger."<<endl;
        return b2;
    }
}




int main(){
    // Rectangle foo;
    // Rectangle bar(2,3);
    // foo = duplicate(bar);
    // cout<<foo.area()<<"\n";
    Rectangle foo;
    Rectangle bar1(3,4);
    Rectangle bar2(3,3);
    foo = compare(bar1,bar2);
    return 0;
}