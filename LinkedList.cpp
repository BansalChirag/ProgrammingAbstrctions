#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        data = d;
        next = NULL;
    }
};


int search(Node*head,int val){
    Node * temp = head;
    int i = 0;
    while(temp!=NULL){
        if(temp->data == val){
            cout<<"hello"<<endl;
            return i;
        }
        temp = temp->next;
        i++;
    }
    return -1;
}

int getithNode(Node * head,int i){
    Node * temp = head;
    int pos = 0;
    while(pos<i && temp!=NULL){
        temp = temp->next;
        pos++;
    }
    return temp->data;
}


void insertAtTail(Node* &head,int d){
    Node *n = new Node(d);
    if(head == NULL){
        head = n;
        return;
    }
    Node * temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

/// function to take input it is same as insertAt tail but it has less time complexity

// Node * takeInput(){
//     int d;
//     cin>>d;
//     Node * head = NULL;
//     Node * tail = NULL;
//     while(d!=-1){
//         Node *n = new Node(d);
//         if(head == NULL){
//             head = n;
//             tail = n;
//             return head;
//         }
//         tail->next = n;
//         tail = tail->next;
//         cin>>d;
//     }
//     return head;
// }


void insertAtHead(Node * head,int d){
    if(head==NULL){
        Node * n = new Node(d);
        head = n;
        return ;
    }
    Node * n = new Node(d);
    n->next = head;
    head = n;
}

void insertAtSpecificPosition(Node*&head,int d,int pos){
    Node * n = new Node(d);
    if(head == NULL){
        head = n;
        return ;
    }
    Node *temp = head;
    int i = 0;
    if(pos == 0){
        n->next = head;
        head = n;
        return ;
    }
    while(i<(pos-1) && temp!=NULL){
        i++;
        temp = temp->next;
    }
    if(temp!=NULL){
        n->next = temp->next;
        temp->next = n;
    }
}


void deleteVal(Node*head,int val){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        Node *todelete = head;
        head = head->next;
        delete todelete;
    }
    Node*temp = head;
    while(temp->next!=NULL && temp->next->data!=val ){
        temp = temp->next;
    }
    Node*deleteNode = temp->next;
    temp->next= temp->next->next;
    free(deleteNode);
}


void deleteFromSpecificPosition(Node*head,int pos){
    if(head == NULL){
        return;
    }
    int i = 0;
    Node * temp = head;
    while(i<pos && temp!=NULL){
        temp = temp->next;
    }
    Node *todelete = temp->next;
    temp->next = temp->next->next;
    delete(todelete);
}




void display(Node * head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}




int main(){

    int d,n;
    cin>>n;
    Node * head = NULL;
    for(int i = 0;i<n;i++){
        cin>>d;
        insertAtTail(head,d);
    }
    // insertAtHead(head,6);
    insertAtSpecificPosition(head,99,3);
    deleteFromSpecificPosition(head,1);
    // cout<<search(head,7)<<endl;
    display(head);
    // cout<<getithNode(head,3);
    return 0;

    
}