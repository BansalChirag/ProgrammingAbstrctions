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


void deleteAthead(Node*&head){
    Node * todelete = head;
    head = head->next;
    head->prev = NULL;
}

void deletion(Node*& head,int pos){
    if(pos==1){
        deleteAthead(head);
        return ;
    }
    Node * temp = head;
    int count = 1;
    while(temp!=NULL && count!=pos){
        temp = temp->next;
        count++;
    }
    Node * todelete = temp;
    temp->prev->next = temp->next;
    if(temp->next!=NULL){
        temp->next->prev = temp->prev;
    }
    free(todelete);
}



Node* reverseDLL(Node * head){
    Node * curr = head;
    if(head == NULL || head->next == NULL){
        return head;
    }
    while(curr->next!=NULL){
        curr = curr->next;
    }
    head = curr;
    curr->next = curr->prev;
    curr->prev = NULL;
    curr = curr->next;
    while(curr->prev!=NULL){
        Node * temp = curr->next;
        curr->next = curr->prev;
        
        curr->prev = temp;
        curr = curr->next;
    }
    curr->prev = curr->next;
    curr->next = NULL;
    return head;
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