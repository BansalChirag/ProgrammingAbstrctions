#include<iostream>
using namespace std;

class Bank{
    private:
    int Total_customers;
    string fname,lname;
    public:



    void setFirstName(string firstName){
        fname = firstName;
    }

    void setLastName(string lastName){
        lname = lastName;
    }

    string getFirstName(){
        return fname; 
    }    

    string getLastName(){
        return lname; 
    }



    void getBalance(){

    }
};





class Account : public Bank{

    

    void newAcc(){
        
    }

    void getAccountNo(){

    }

    void displayInfo(){

    }
    void closeAcc(){

    }
};


class Person{
    bool searchAcc(int acn){
        // if(accountno == acn){
        //     return true;
        // }
        return false;
    }
    void openAcc(string n,string c,string l,int bal){

    }

    void displayAllAcc(){

    }
    void getAdd(){
        
    }
    void updateAdd(){

    }

};


class Customer:public Person{
    void displayAcc(){
        // cout << "Name: " << name << endl
        //  << "Address: " << address << endl
        //  << "Type: " << acc_type << endl
        //  << "Balance: " << balance << endl
        //  << endl;
    }
};


class Employee : public Person{

};

class Transaction{
    void withdraw(){
    //     float amount;
    // amount = 3200;
    // cout << "Enter how much money "
    //      << "you want to withdraw: "
    //      << amount << endl;
    // balance -= amount;
    // cout << "\n Available balance: "
    //      << balance;
    }
    
    void deposit(){
        float Amount;
        float balance;
        balance+=Amount;
        cout<<"Total Available Balance : "<<balance<<endl;
    }


    int updateBalance(){
        // return balance;
        return -1;
    }
};




int main(){
    return 0;
}