#include<iostream>
using namespace std;
#define size 100


class queue{
    int front,rear;
    public:
    int arr[size];
    queue(){
        front = 0;
        rear = -1;
    }
    bool isFull(){
        if(rear == (size-1)){
            return true;
        }
        return false;

    }
    bool isEmpty(){
        if(front>rear){
            return true;
        }
        return false;
    }
    void enqueue(int x){
        if(isFull()){
            cout<<"Queue is Full."<<endl;
            return;
        }
        arr[++rear] = x;
        // rear++;
    }

    int dequeue(){
        if(isEmpty()){
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        int d = arr[front];
        front++;
        return d;
    }

    void display(){
        cout << "Queue :" << endl;
        for(int i=front; i<=rear; i++){
            cout << arr[i] << endl;
        }
    }
};



int main(){
    queue q1;
    int n,element;
    do{
        cout<<"Enter 1 for enqueue."<<endl;   
        cout<<"Enter 2 for dequeue."<<endl;   
        cout<<"Enter 3 to display elements of queue."<<endl;   
        cout<<"Enter -1 to exit the program"<<endl;
        cin>>n;
        switch (n){
        case 1:
            cout<<"Enter the element which you want to enqueue"<<endl;
            cin>>element;
            q1.enqueue(element);
            break;
        case 2:
            cout<<"deque element is : ";
            cout<<q1.dequeue()<<"\n";
            break;
        case 3:
            q1.display();
            break;
        case -1:
            exit(0);
        default:
            break;
        }
    }
    while(1);
    // for(int i = 0;i<n;i++){
    //     cin>>element;
    //     q1.enqueue(element);
    // }
    // for(int i = 0;i<n;i++){
    //     cout<<q1.dequeue()<<" ";
    // }
    return 0;
}