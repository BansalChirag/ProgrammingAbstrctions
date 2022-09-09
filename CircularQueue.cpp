#include<iostream>
#define size 5
using namespace std;

class Cq{
    private:
    int cq[size],front,rear;
    public:
    Cq(){
        front = -1,rear = -1;
        for(int i=0; i<size; i++){
            cq[i]=0;
        }
    }
    bool isFull(){
        if((rear+1) % size == front){
            return true;
        }
        return false;
    }

    bool isEmpty(){
        if(front == -1){
            return true;
        }
        return false;
    }
    void enqueue(int val){
        if(isFull()){
            cout<<"Queue is full"<<endl;
            return;
        }else if(isEmpty()){
            rear=0;
            front=0;
            cq[rear]=val;
            return ;
        }
        rear = (rear+1) % size;
        cq[rear] = val;
    }
    int dequeue(){
        int x = -1;
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return  x;
        }
        else if(rear == front){
            x = cq[rear];
            rear = -1;
            front = -1;
            return x;
        }else{
            x = cq[front];
            front = (front + 1) % size;
            return x;
        }
    }
    void  display(){
        if(rear == -1 && front == -1){
            cout<<"Queue is empty!"<<endl;
        }
        else{
            cout<<"Elements in the queue are : ";
            for(int i = front;i<=rear;){
                cout<<cq[i]<<" ";
                i = (i + 1) % size;
            }
        }
        cout<<endl;
    }
};



int main(){
    Cq q1;
    int value, option;
    while(1){
        cout<<"\n\nWhat option do you want to perform? Select an option number. Enter 0 to exit"<<endl;
        cout<<"1.Enqueue()"<<endl;
        cout<<"2.Dequeue()"<<endl;
        cout<<"3.isEmpty()"<<endl;
        cout<<"4.isFull()"<<endl;
        // cout<<"5.count()"<<endl;
        cout<<"5.display"<<endl;
        cout<<"6.ClearScreen"<<endl;
        cin>>option;

        switch(option){
            case 0:
                break;

            case 1:
                cout<<"Enqueue operation \nEnter an item to Enqueue in the queue : ";
                cin>>value;
                q1.enqueue(value);
                break;

            case 2:
                cout<<"Deque operation \nDequeued value:"<<q1.dequeue()<<endl;
                break;
            case 3:
                if (q1.isEmpty()){
                    cout<<"Queue is empty"<<endl;
                }
                else{
                    cout<<"Queue is not empty"<<endl;
                }
                break;
            case 4:
                if(q1.isFull()){
                    cout<<"Queue is full"<<endl;
                }
                else {
                    cout<<"Queue is not full"<<endl;
                }
                break;
            // case 5:
            //     cout<<"count operation \n Count of items in queue:"<<q1.count()<<endl;
            //     break;
            case 5:
                q1.display();
                break;
            case 6:
                system("cls");
                break;
            default:
                cout<<"Enter proper option number"<<endl;

            }
    }
    return 0;
}