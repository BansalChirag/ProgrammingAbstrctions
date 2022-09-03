#include<iostream>
#include<vector>
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


int len_reccur(Node *head){
    if(head==NULL){
        return 0;
    }

    return (len_reccur(head->next) + 1);
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



Node *moveToFront(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node * temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    Node * toMove = temp->next;
    toMove->next = NULL;
    temp->next = temp->next->next;
    toMove->next = head;
    head = toMove;
    return toMove;
}


Node *reverseRecursive(Node *&head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node * newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

void insert_recursion(Node * head,int d,int pos){
    if(head == NULL){
        return;
    }
    if(pos == 0){
        Node * n = new Node(d);
        n->next = head->next->next;
        head->next = n;
        head = n;
    }
    insert_recursion(head->next,d,pos-1);
}

void deleteFromSpecificPosition(Node* &head,int pos){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        Node *todelete = head;
        head = head->next;
        delete todelete;
    }
    if(pos == 1){
        Node*deleteNode = head;
        head = head->next;
        free(deleteNode);
        return;
    }
    int i = 1;
    Node * temp = head;
    while(i<pos-1 && temp->next!=NULL){
        temp = temp->next;
        i++;
    }
    Node *todelete = temp->next;
    temp->next = temp->next->next;
    delete(todelete);
}


int getMiddle(Node * head){
    if(head == NULL ){
        return -1;
    }
    if(head->next == NULL){
        return head->data;
    }
    Node * slow = head,*fast = head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
}


Node * reversingLinkedList(Node *&head){
    Node * current = head;
    Node * nextPtr = NULL;
    Node * prev = NULL;
    while(current!=NULL){
        nextPtr = current->next;
        current->next = prev;
        prev = current;
        current = nextPtr;
    }
    return prev;
}

// Node* EvenAfterOdd(Node*&head){
//     vector<int> even;
//     vector<int> odd;
//     Node * temp = head;
//     while(temp!=NULL){
//         if((temp->data) % 2 == 0){
//             even.push_back(temp->data);
//         }else{
//             odd.push_back(temp->data);
//         }
//         temp = temp->next;
//     }
//     // return head;
//     Node * new_head = NULL;
//     for(int i = 0;i<odd.size();i++){
//         insertAtTail(new_head,odd[i]);
//     }
//     for(int i = 0;i<even.size();i++){
//         insertAtTail(new_head,even[i]);    
//     }
//     return new_head;
// }

Node* EvenAfterOdd(Node*&head){
    Node *odd_head = NULL,*even_head = NULL,*odd_tail = NULL,*even_tail = NULL;
    while(head){
        if(head->data % 2 == 0){
            if(even_head == NULL){
                even_head = head;
                even_tail = head; 
            }else{
                even_tail->next = head;
                even_tail = even_tail->next;
            }
        }else{
            if(odd_head == NULL){
                odd_head = head;
                odd_tail = head; 
            }else{
                odd_tail->next = head;
                odd_tail = odd_tail->next;
            }
        }
        head = head->next;
    }
    odd_tail->next = even_head;
    even_tail->next = NULL;
    if(even_tail) even_tail->next = odd_head;
    if(odd_tail) odd_tail->next = NULL;
    if(even_tail) return even_head;
    return odd_head;
}



void moveZeroes(struct Node **head){
    Node*current = (*head)->next;
    Node*prev = *head;
    while(current!=NULL){
        if(current->data == 0){
            prev->next = current->next;
            current->next = *head;
            *head = current;
            current = prev->next;
        }else{
            prev = prev->next;
            current = current->next;
        }
    }
}


Node *sortedInsert(struct Node* head, int val) {
    if(head == NULL){
        return NULL;
    }
    Node * temp = head;
    struct Node* n = new Node(val);
    if(temp->data>=val){
        n->next = head;
        head = n;
        return head;
    }
    while(temp->next!=NULL){
        if(temp->data<=val && val<=temp->next->data){
            n->next = temp->next;
            temp->next = n;
            return head;
        }
        temp = temp->next;
    }
    if(temp->next==NULL){
        temp->next = n;
    }
    return head;
}



void deleteNode(Node *del)
    {
        if(del->next == NULL){
            delete del;
            return;
        }
       Node * temp = del->next;
       del->next = temp->next;
       del->data = temp->data;
       delete temp;
       
    }



Node * reverseKNode(Node * &head, int k){
    Node *previous = NULL;
    Node *current = head;
    Node *nextnode;

    int count = 0;
    while(current!=NULL && count <k){
        nextnode= current->next;
        current->next = previous;

        previous = current;
        current = nextnode;
        count++;
    }
    return previous;
}


Node * mergeTwoSortedLL(Node*head1,Node*head2){
    Node* fh = NULL,*ft = NULL;
    while(head1!=NULL && head2!=NULL){
        if(head1->data<=head2->data){
            if(ft == NULL){
                fh = head1;
                ft = head1;
                head1 = head1->next;
            }else{
                ft->next = head1;
                ft = head1;
                head1 = head1->next;
            }
        }else{
            if(ft == NULL){
                fh = head2;
                ft = head2;
                head2 = head2->next;
            }else{
                ft->next = head2;
                ft = head2;
                head2 = head2->next;
            }
        }
    }
    while(head1!=NULL){
        ft->next = head1;
        ft = head1;
        head1 = head1->next;
    }
    while(head2!=NULL){
        ft->next = head2;
        ft = head2;
        head2 = head2->next;
    }
    return fh;
}


Node* RotateLL(Node *&head,int k){
    int i = 1,length = len_reccur(head);
    Node * temp = head,* head2 = NULL,*tail = NULL;
    while(i<(length-k) && temp!=NULL){
        temp = temp->next;
        i++;
    } 
    if(temp!=NULL){
        head2 = temp->next;
        tail = temp->next;
        temp->next = NULL;
    }
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next = head;
    return head2;
}

Node* RemoveConsecutiveDuplicates(Node*head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node * t1 = head,*t2 = head->next;
    while(t2!=NULL){
        if(t1->data == t2->data){
            Node * todelete = t2;
            t2 = t2->next;
            free(todelete);
            // t1->next = t2;
        }else{
            t1->next = t2;
            t1 = t2;
            t2 = t2->next;
        }
    }
    t1->next =  t2;
    return head;
} 

bool detectCycle(Node*&head){
    if(head == NULL || head->next==NULL){
            return false;
        }
        Node * slow = head,*fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow){
                return true;
            }
        }
        return false;
}

void removeCycle(Node * &head){
    Node* slow = head;
    Node * fast = head;
    do{
        slow = slow->next;
        fast = fast->next->next;
    }
    while(slow!=fast);
    fast = head;
    while(slow->next!=fast->next){
        slow = slow->next;
        fast = fast->next;
    }  
    slow->next = NULL;
}


void makeCycle(Node* &head,int pos){
    Node * temp =head,*startNode;
    int cnt = 1;
    while(temp->next!=NULL){
        if(cnt == pos){
            startNode = temp;
        }
        temp = temp->next;
        cnt++;
    }
    temp->next = startNode;
}

int findNode(Node * head,int val){
    Node * temp = head;
    int i = 0;
    while(temp!=NULL){
        if(temp->data==val){
            return i;
        }
        temp = temp->next;
        i++;
    }
    return -1;
}



bool isPalindrome(Node *&head){
    if(head == NULL || head->next == NULL){
        return true;
    }
    int l =len_reccur(head),i = 1;
    Node * current = head;
    if(l % 2 != 0){
        while(i<(l+1) / 2){
            current = current->next;
            i++;
        }
    }else{
        while(i<(l+1) / 2){
            current = current->next;
            i++;
        }
    }
    bool check = true;
    Node * reverseLL = reversingLinkedList(current);
    while(head!=NULL && reverseLL != NULL){
        if(reverseLL->data != head->data){
            check = false;
            break;
        }
        reverseLL = reverseLL->next;
        head = head->next;
    }
    return check;
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
    Node * head1 = NULL;
    Node * head2 = NULL;
    cout<<"Enter elements of head2"<<endl;
    for(int i = 0;i<5;i++){
        cin>>d;
        insertAtTail(head1,d);
    }
    cout<<"Enter elements of head2"<<endl;
    for(int i = 0;i<4;i++){
        cin>>d;
        insertAtTail(head2,d);
    }
    // insertAtHead(head,6);
    // insertAtSpecificPosition(head,99,3);
    // cout<<search(head,7)<<endl;
    display(head1);
    display(head2);
    // cout<<"Length Of Linked List : "<<len_reccur(head);
    // insert_recursion(head,7,3);
    // cout<<"Reversed Linked List is : "<<endl;
    // Node * new_head = reversingLinkedList(head);
    // deleteFromSpecificPosition(head,3);
    // display(head);
    // cout<<getithNode(head,3);

    // Node * new_head1 = EvenAfterOdd(head);
    // cout<<"New Linked List : ";
    // display(new_head1);    

    // cout<<findNode(head,4);
    // Node * new_head2 = RotateLL(head,3);
    // RotateLL(head,3);
    // display(new_head2);
    // Node * new_head3 = RemoveConsecutiveDuplicates(head);
    // display(new_head3);
    // Node * new_head4 = reverseRecursive(head);
    Node*new_head4 = mergeTwoSortedLL(head1,head2);
    display(new_head4);
    return 0;

    
}