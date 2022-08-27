#include<iostream>
using namespace std;

class student{
    string name;
    float age;
    public:
    student(){
        cout<<"Constructor is called\n";
    }
    student(string name,float age){
        this->name = name;
        this->age = age;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
    void * operator new(size_t size){
        cout<<"Overlaoding new operator with size: "<<size<<endl;
        void *p = ::operator new(size);
        return p;
    }
    void operator delete(void *p){
        cout<<"Overlaoding delete operator ";
        free(p);
    }
};



int main(){
    student*p = new student("C Plus Plus",4);
    p->display();   
    return 0;
}