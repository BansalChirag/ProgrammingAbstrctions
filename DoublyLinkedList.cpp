#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next,*prev;
    Node(int d){
        data = d;
        next = NULL;
        prev = NULL;
    }
};


void insertAthead(Node *&head,int d){
    Node* newNode = new Node(d);
    if(head == NULL){
        head = newNode;
        return ;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}


void insertAtTail(Node * &head,int d){
    Node *newNode = new Node(d);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node * temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp; 

}



void insertBetween(Node *& head,int i,int d){
    Node * newNode = new Node(d);
    if(head == NULL){
        head = newNode;
        return;
    }
    
}



void display(Node * head){
    Node * temp = head;
    cout<<"NULL<->";
    while(temp!=NULL){
        cout<<temp->data<<"<->";
        temp = temp->next;
    }
    cout<<"NULL";
}




int main(){
    Node * head = NULL;
    // Node * prev = NULL;
    int n,d;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>d;
        insertAtTail(head,d);
    }
    insertAthead(head,7);
    display(head);
    return 0;
}