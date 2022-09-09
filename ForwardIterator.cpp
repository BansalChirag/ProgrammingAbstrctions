#include<iostream>
#include<list>
using namespace std;

// Templates

template<class T>
T search(T arr[],T n,T key){
    for(int i = 0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}



// Templates + iterators
template<class ForwardIterator,class T>
ForwardIterator search(ForwardIterator start,ForwardIterator end,T key){
    while(start!=end){
        if(*start == key){
            return start;
        }
        start++;
    }
    return end;
}

// Templates + iterators + Comparators

template<class ForwardIterator,class T,class Compare>
ForwardIterator search(ForwardIterator start,ForwardIterator end,T key,Compare cmp){
    while(start!=end){
        if(cmp(*start,key)){
            return start;
        }
        start++;
    }
    return end;
}




class Book{
    public:
    string name;
    int price;
    Book(string name,int price){
        this->name = name;
        this->price = price;
    }
};

class BookCompare{
    public:
    bool operator()(Book A,Book B){//funciton overloading
        if(A.name == B.name){
            return true;
        }
        return false;
    }
}; 


int main(){
    // list<int> l;
    // l.push_back(1);
    // l.push_back(2);
    // l.push_back(5);
    // l.push_back(4);
    // l.push_back(3);

    // auto it = search(l.begin(),l.end(),50);
    // if(it == l.end()){
    //     cout<<"element not present"<<endl;
    // }else{
    //     cout<<*it;
    // }
    Book b1("C++",100);
    Book b2("python",120);
    Book b3("java",130);
    list<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);
    Book booktofind("C++",110);
    BookCompare cmp;
    search(l.begin(),l.end(),booktofind,cmp);
    return 0;
}