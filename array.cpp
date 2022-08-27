#include<iostream>
using namespace  std;



//logic for searching element from array

double search_array(double a[],double key,double n){
    for(int i = 0;i<n;i++){
        if (a[i] == key){
                cout<<"Element found at index : "<<i<<endl;
            return i;
        }
    }
    cout<<key<<" doesn't exist in array."<<endl;
    return -1;
}


// logic for inserting element in array


void insert_array(double a[], int val){
    if (a[val-1] != -1){
        cout<<"Sorry the array is full you can't insert."<<endl;
        return;
    }
    double x;
    cout << "Enter the element to insert in array : ";
    cin >> x;
    a[val-1] = x;
    cout<<"Element inserted."<<endl;
}


//logic for deleting element from array

void delete_array(double a[],int val){
    double del_ele;
    cout<<"Enter the value of array you want to delete : ";
    cin>>del_ele;
    int x = search_array(a,del_ele,val);
    if(x == -1){
        cout<<"Oops element you want to delete doesn't exist.";
    }else{
        for(int i = x;i<val;i++){
            a[x] = a[x+1];
            x++;
        }
        a[val-1] = -1;      
    }
}



//logic for traversing in array

void traverse_array(double a[], int val){
    cout<<"Elements in array are : "<<endl;
    for(int i=0; i<val; i++){
        cout<<a[i]<<endl;
    }
}



int main(){
    int input=0;
    cout<<"How many elements do you want to add? ";
    cin>>input;
    const int val=input;
    double foo[val];


    //taking input from array.
    for(int i=0; i<val; i++){
        cout<<"Enter the value for index "<<i<<" : ";
        cin>>foo[i];
    }
    enum arrayoperations{traverse=1,insert,search, deleteElement};

    do{
        int options=0;
        cout<<"Choose any of the following operations:";
        cout<<"1. Traverse Array";
        cout<<" 2. Insert at a location";
        cout<<" 3. Search element in array";
        cout<<" 4. Delete Element from array"<<endl;
        cin>>options;

        switch(options)
        {
            case traverse:
                traverse_array(foo, val);
                break;
            case insert:
                insert_array(foo, val);
                break;
            case search:
                int x;
                cout << "Enter element to search in array : ";
                cin>>x;
                search_array(foo,x,val);
                
                break;
            case deleteElement:
                delete_array(foo, val);
                cout<<"Element Deleted."<<endl;
                break;
            default:
                cout<<"Invalid operation";
        }

        ///add logic to exit or continue the loop
    }while(1);

    
    
    //logic for print/traverse and array 
    for(int i=0; i<val; i++)
    {
        cout<<"value for index "<<foo[i]<<endl;
    }
    

    


    return 0;
}

