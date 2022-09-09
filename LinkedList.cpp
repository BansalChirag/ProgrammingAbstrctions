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

// -------------------------------- searching element in Linked List ----------------------------------------- ///


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


// -------------------------------- length of Linked List using recursion ----------------------------------------- ///
int len_reccur(Node *head){
    if(head==NULL){
        return 0;
    }

    return (len_reccur(head->next) + 1);
}


// -------------------------------- length of Linked List using iterative method ----------------------------------------- ///

int len(Node *head){
    int cnt = 0;
    Node * temp = head;
    while(temp!=NULL){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

// -------------------------------- length of Linked List using recursion ----------------------------------------- ///

int getithNode(Node * head,int i){
    Node * temp = head;
    int pos = 0;
    while(pos<i && temp!=NULL){
        temp = temp->next;
        pos++;
    }
    return temp->data;
}


// -------------------------------- insertion at the end of linked list ----------------------------------------- ///

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


// -------------------------------- insertion at the head of linked list ----------------------------------------- ///

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

// -------------------------------- insertion at the specific position of linked list ----------------------------------------- ///

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



// Node *moveToFront(Node *head){
//     if(head == NULL || head->next == NULL){
//         return head;
//     }
//     Node * temp = head;
//     while(temp->next->next!=NULL){
//         temp = temp->next;
//     }
//     Node * toMove = temp->next;
//     toMove->next = NULL;
//     temp->next = temp->next->next;
//     toMove->next = head;
//     head = toMove;
//     return toMove;
// }



// -------------------------------- delete from specific position in linked list ----------------------------------------- ///


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






// -------------------------------- Finding intersection linked list of two sorted linked list  ----------------------------------------- ///



Node* findIntersection(Node* head1, Node* head2){   // two sorted LL
    Node * ILL = NULL;
    if(head1 == NULL || head2 == NULL){
        return NULL;
    }
    Node *temp1 = head1,*temp2 = head2;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data == temp2->data){
            insertAtTail(ILL,temp1->data);
            temp1 = temp1->next;
            temp2 = temp2->next;
        }else if(temp1->data<temp2->data){
            temp1 = temp1->next;
        }else{
            temp2 = temp2->next;
        }
    }
    return ILL;
}

// -------------------------------- finding intersection of two linked list  ----------------------------------------- ///

int intersectPoint(Node* head1, Node* head2){
    int l1 = len(head1),l2 = len(head2);
    int d = 0;
    Node * ptr1 = NULL,*ptr2 = NULL;
    if(l1>l2){
        d = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }else{
        d = l2-l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while(d--){
        ptr1 = ptr1->next;
        if(ptr1 == NULL){
            return -1;
        }
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1 == ptr2){
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}


// -------------------------------- Reverse a linked list using recursion ----------------------------------------- ///

Node *reverseRecursive(Node *&head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node * newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

// -------------------------------- Reverse a linked list using iteration ----------------------------------------- ///

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


// -------------------------------- Sorting Zero one two linked list ----------------------------------------- ///

Node* Zero12(Node*head){
    int cnt0 = 0,cnt1 = 0,cnt2 = 0;
        Node * temp = head;
        while(temp!=NULL){
            if(temp->data == 0){
                cnt0++;
            }else if(temp->data == 1){
                cnt1++;
            }else {
                cnt2++;
            }
            temp = temp->next;
        }
        temp = head;
        while(cnt0>0){
            temp->data = 0;
            temp = temp->next;
            cnt0--;
        }
        while(cnt1>0){
            temp->data = 1;
            temp = temp->next;
            cnt1--;
        }
        while(cnt2>0){
            temp->data = 2;
            temp = temp->next;
            cnt2--;
        }
        
        return head;
}


void deleteAlt(struct Node *head){
   Node* temp=head;
   while(temp!=NULL){
       if(temp->next!=NULL){
           temp->next=temp->next->next;
       }
       temp=temp->next;
   }
}

// void insert_recursion(Node * head,int d,int pos){
//     if(head == NULL){
//         return;
//     }
//     if(pos == 0){
//         Node * n = new Node(d);
//         n->next = head->next->next;
//         head->next = n;
//         head = n;
//     }
//     insert_recursion(head->next,d,pos-1);
// }




// -------------------------------- get middle element ----------------------------------------- ///

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


// -------------------------------- Delete nodes having bigger right value in a linked list  ----------------------------------------- ///

Node *DeleteNodesWithBigRIghtValue(Node *head){
    head = reversingLinkedList(head);
    Node * prev = head;
    Node * curr = head;
    int ma = head->data;
    while(head){
        if(head->data>=ma){
            ma = head->data;
            prev = head;
            head = head->next;
        }else{
            Node * todelete = prev->next;
            prev->next = head->next;
            head = prev->next;  
            delete todelete;
        }
    }
    head = reversingLinkedList(curr);
    return head;
}




// -------------------------------- Even after odd linked list ----------------------------------------- ///
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





// -------------------------------- adding one to a linked list  ----------------------------------------- ///

Node* addOne(Node *head) {
        if(head->next == NULL){
            head->data = 1 + head->data;
            return head;
        }
        head = reversingLinkedList(head);
        Node * temp = head;
        int carry = 1,sum = 0;
        Node * x = temp;
        while(temp->next!=NULL){
            sum = carry + temp->data;
            carry = (sum>=10) ? 1 : 0;
            temp->data = sum % 10;
            temp = temp->next;
        }
        if(temp->next == NULL){
            temp->data = carry + temp->data;
        }
        head = reversingLinkedList(x);
        return head;
    }

// -------------------------------- move zeroes to front ----------------------------------------- ///


// void moveZeroes(struct Node **head){
//     Node*current = (*head)->next;
//     Node*prev = *head;
//     while(current!=NULL){
//         if(current->data == 0){
//             prev->next = current->next;
//             current->next = *head;
//             *head = current;
//             current = prev->next;
//         }else{
//             prev = prev->next;
//             current = current->next;
//         }
//     }
// }


// -------------------------------- Insert in a sorted linked list ----------------------------------------- ///


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


// -------------------------------- delete without head pointer ----------------------------------------- ///

void deleteNode(Node *del){
    if(del->next == NULL){
        delete del;
        return;
    }
   Node * temp = del->next;
   del->next = temp->next;
   del->data = temp->data;
   delete temp;
   
}

// -------------------------------- Reverse k nodes of linked list  ----------------------------------------- ///

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
    head->next = reverseKNode(nextnode,k);
    return previous;
}


// -------------------------------- merge two sorted linked list ----------------------------------------- ///

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


// -------------------------------- Rotate a linked list ----------------------------------------- ///


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


// -------------------------------- Detect cycle in a linked list ----------------------------------------- ///

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

// -------------------------------- Remove a cycle in linked list ----------------------------------------- ///

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


// -------------------------------- Finding node in a linked list  ----------------------------------------- ///


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


// -------------------------------- Checking a linked list Palindrome or not ----------------------------------------- ///


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


// -------------------------------- Printing a linked list  ----------------------------------------- ///


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
    for(int i = 0;i<n;i++){
        cin>>d;
        insertAtTail(head1,d);
    }
    display(head1);
    // MoveHeadTail(head1);
    // display(head1);
    // cout<<"Enter elements of head2"<<endl;
    // for(int i = 0;i<4;i++){
    //     cin>>d;
    //     insertAtTail(head2,d);
    // }
    // insertAtHead(head,6);
    // insertAtSpecificPosition(head,99,3);
    // cout<<search(head,7)<<endl;
    // display(head2);
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
    // Node*new_head4 = mergeTwoSortedLL(head1,head2);
    // display(new_head4);
    return 0;

    
}