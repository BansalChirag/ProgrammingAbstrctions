#include<iostream>
using namespace std;


class DynamicArray{
    int *data;
    int nextIdx,capacity;
    public:
    DynamicArray(){
        data = new int[5];
        nextIdx = 0;
        capacity = 5;
    }

    DynamicArray(DynamicArray const& d){
        // this->data = d.data;  shallow copy
        this->data = new int[d.capacity];
        for(int i = 0;i<d.nextIdx;i++){
            this->data[i] = d.data[i];
        }
        this->nextIdx = d.nextIdx;
        this->capacity = d.capacity;
    }



    void operator=(DynamicArray const & d){
        this->data = new int[d.capacity];
        for(int i = 0;i<d.nextIdx;i++){
            this->data[i] = d.data[i];
        }
        this->nextIdx = d.nextIdx;
        this->capacity = d.capacity;
    }

    void add(int element){
        if(nextIdx == capacity){
            int *newData = new int[2*capacity];
            for(int i = 0;i<capacity;i++){
                newData[i] = data[i];
            }
            delete [] data;
            data = newData;
            capacity*=2; 
            // as newData will be a local scope so we are pointing data to newData
        }
        data[nextIdx] = element;
        nextIdx++;
    }

    int get(int i){
        if(i<nextIdx){
            return data[i];
        }
        else{
            // cout<<"Element Doesn't Exist!";
            return -1;
        }
    }



    void add(int i,int element){
        if(i<nextIdx){
            data[i] = element;
        }else if(i == nextIdx){
            add(element);
        }else{
            return ;
        }
    }

    void print(){
        for(int i = 0;i<nextIdx;i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
};


int main(){
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.print();
    return 0;
}