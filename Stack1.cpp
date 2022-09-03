#include<iostream>
using namespace std;
#define size 100

template<class T>

class Stack{
    int top = -1;
    public:
    T arr[size];
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    } 
    
    bool isFull(){
        if(top == (size-1)){
            return true;
        }
        return false;
    }
    void push(int val){
        if(isFull()){
            cout<<"Stack is overflow"<<endl;
            return;
        }
        arr[++top] = val;
    }
    int pop(){
        if(isEmpty()){
            cout<<"Stack is underflow"<<endl;
            return -1;
        }
        T x = arr[top];
        top--;
        return x;
    }
    int Top(){
        if(top == -1){
            cout<<"No element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    void display(){
        for(int i = 0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};



int main(){

    Stack<int>s1;
    // int element;
    // for(int i = 0;i<5;i++){
    //     cin>>element;
    //     s1.push(element);
    // }
    s1.push(1.1);
    s1.push(2.3);
    s1.push(3.2);
    s1.push(4.5);
    s1.push(5.8);

    s1.display();
    // cout<<s1.pop()<<" ";
    // cout<<s1.pop()<<" ";
    // cout<<s1.pop()<<" ";
    // cout<<s1.pop()<<" ";
    // cout<<s1.pop()<<" ";
    // cout<<s1.Top();
    // cout<<s1.isEmpty();
    // cout<<s1.pop()<<" ";
    return 0;
}