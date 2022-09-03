#include<iostream>
using namespace std;

// class Node{
//     public:
//     int data;
//     Node * next;
//     Node(int d){
//         d = data;
//         next = NULL;
//     }
// };
struct Node{
    int data;
    struct Node* next;
    Node(int data){
        this->data = data;
    }
};



class Stack{
    Node * head;
    public:
    int size;
    Stack(){
        head = NULL;
        size = 0;
    }
    void push(int val){
        cout<<"val : "<<val<<endl;
        Node * n = new Node(val);
        // cout<<"push function called"<<endl;
        cout<<n->data<<endl;
        if(head == NULL){
            head = n;
            return ;
        }
        n->next = head;
        head = n;
        size++;
    }

    int pop(){
        // cout<<"pop function called"<<endl;
        size--;
        Node * todelete = head;
        head = head->next;
        int x = todelete->data;
        free(todelete);
        return x;
    }



};

int main(){
    Stack s1;
    s1.push(3);
    cout<<s1.pop();
    return 0;
}