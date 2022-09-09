#include <iostream>
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

void deleteFromSpecificPosition(Node* &head,int pos){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        Node *todelete = head;
        head = head->next;
        delete todelete;
    }
    if(pos == 0){
        Node*deleteNode = head;
        head = head->next;
        free(deleteNode);
        return;
    }
    int i = 0;
    Node * temp = head;
    while(i<pos-1 && temp->next!=NULL){
        temp = temp->next;
        i++;
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


int main() {
	int t,n,k,ele;
	cin>>t;
	while(t-->0){
		cin>>n>>k;
		int arr[n];
		Node * head = NULL;
		for(int i = 0;i<n;i++){
			cin>>arr[i];
			insertAtTail(head,arr[i]);
		}
        cout<<"Elements in LL : ";
        // display(head);
        for(int i = 0;i<n;i++){
            cout<<arr[i]<<" ";
        }
		int r = 0;
        int i = 0;
        Node * temp = head;
        while(temp->next!=NULL){
            if(temp->data<temp->next->data){
                cout<<"\nhello\n";
                deleteFromSpecificPosition(head,i);
            }
            temp = temp->next;
            i++;
        }
		// for(int i = 0;i<n-1;i++){
		// 	if(arr[i]<arr[i+1]){
		// 		r++;
		// 		arr[i] = 0;
        //     }
		// }
        // for(int i = 0;i<n;i++){
        //     cout<<arr[i]<<" ";
        // }
		display(head);

	}
	
}