#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};


int len(Node *head){
    int cnt = 0;
    Node * temp = head;
    while(temp!=NULL){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}


void insertAthead(Node*&head,int val){
    Node *n = new Node(val);
    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }
    Node *temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}


void insertAtTail(Node*&head,int val){
    Node *n = new Node(val);
    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }
    Node *temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;

    n->next = head;
}


void deleteAthead(Node*&head){
    Node * temp = head;
    while(temp->next!=head){
        temp=temp->next;
    }
    Node * todelete = temp;
    temp->next = head->next;
    head = head->next;
    delete todelete;
}



void deleteEnd(Node*&head){
    Node * temp = head;
    while(temp->next->next!=head){
        temp = temp->next;
    }
    Node * todelete = temp->next;
    temp->next = head;
    delete todelete;
}

void display(Node*head){
    Node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    while(temp!=head);
}

void splitList(Node *head, Node **head1_ref, Node **head2_ref){
    Node * slow = head,*fast = head;
    while(fast->next!=head && fast->next->next!=head){
        fast = fast->next->next;
        slow = slow->next;
    }
    *head1_ref = head;  
    *head2_ref = slow->next;
    slow->next = *head1_ref;
    Node * curr = *head2_ref;
    while(curr->next!=head){
        curr = curr->next;
    }
    curr->next = *head2_ref;
}







Node *sortedInsert(Node* head, int data){
    if(head == NULL){
        return NULL;
    }
    Node * temp = head;
    Node* n = new Node(data);
   while(temp->next!=head){
       if(temp->data<=data && data<=temp->next->data){
           n->next = temp->next;
           temp->next = n;
           return head;
       }
       temp = temp->next;
   }
   if(temp->next == head && temp->data <=data){
       temp->next = n;
       n->next = head;
   }else if(temp->next == head && head->data>=data){
       temp->next = n;
       n->next = head;
       head = n;
   }
   return head;
}

int main(){
    Node *head = NULL;
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,7);
    insertAtTail(head,9);
    // insertAtTail(head,9);
    // insertAthead(head,11);
    display(head);
    Node *new_head = sortedInsert(head,1);
    cout<<endl;
    display(new_head);

    return 0;
}