#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;
 

class bookshope {
public:
    void main_page();
    void add_book();
    void show_book();
    void check_book();
    
};
 

void bookshope::main_page()
{

    cout << "\n\n\t\t\t\tBOOK MANAGEMENT SYSTEM";
    cout << "\n\n1. ADD BOOK";
    cout << "\n2. DISPLAY BOOKS";
    cout << "\n3. CHECK PARTICULAR BOOK fOR CUSTOMER";
    cout << "\n4. EXIT";
}
 
void bookshope::add_book()
{
    fstream file;
    int stock_pos,price;
    string b_name, a_name,p_name;
    cout << "\n\n\t\t\t\tADD BOOKS";
    cout << "\nBook Name: ";
    cin >> b_name;
    cout << "\nAuthor Name: ";
    cin >> a_name;
    cout << "\nPublisher Name: ";
    cin >> p_name;
    cout << "\nPrice:";
    cin >> price;
    cout << "\nNo. of Books in stock: ";
    cin >> stock_pos;
 
   
    file.open("file1.txt",ios::out | ios::app);

    file <<b_name << " "
         << a_name << " " << p_name
         << " " <<price<<" "<<stock_pos<< "\n";
    file.close();
}
 
void bookshope::show_book()
{
    fstream file;
    int stock_pos,price;

    string b_name, a_name,p_name;
    cout << "\n\n\t\t\t\t\tDISPLAY BOOKS";
 
    file.open("file1.txt", ios::in);
     if(!file.is_open()){
        cout << "\n\nfile not opens!";
     }
    else {
 
        cout << "\n\n\nBook Name"<<"\tAuthor"<<"\t\tPublisher"<<"\tPrice"<<"\tBooks in stock\n\n";

        file >>b_name >> a_name;
        file >> p_name >> price>>stock_pos;
 
        while (!file.eof()) {

 
            cout<< b_name
                 << "\t\t" << a_name
                 << "\t\t" << p_name
                 << "\t\t" << price
                 << "\t\t" << stock_pos
                 << "\n\n";
            file >> b_name>> a_name;
            file >> p_name >>price>>stock_pos;
        } 
 
     file.close();
    }
}
 
void bookshope::check_book()
{
    fstream file;
    int stock_pos,price;
    string  b_name, a_name,p_name, b_cname,a_cname;
 
    cout << "\n\n\t\t\t\tCheck "
         << "Particular Book";
 
    file.open("file1.txt", ios::in);
    if (!file)
        cout << "\n\nFile Opening Error!";
    else {
        cout << "\n\nBook C_Name : ";
        cin >> b_cname;
        cout << "\n\nAuthor A_Name : ";
        cin >> a_cname;

        file >> b_name >> a_name;
        file >> p_name >>price>>stock_pos; 
 
        while (!file.eof()) {
 
            if (b_cname == b_name && a_cname== a_name) {
 
            
                cout << "\n\n\t\t\t\t"
                     << "Check Particular Book";
                cout << "\n\nBook Name: "
                     << b_name;
                cout << "\nAuthor : "
                     << a_name;
                cout << "\nPublisher: "
                     << p_name;
                cout << "\nPrice: "   
                     << price;

                cout << "\nStock pos: "
                     << stock_pos;
                cout << endl
                     << endl;
                
    
                int cust_copies;
                cout<<"Enter No. of copies customer want:";
                cin>>cust_copies;

                cout<<"cust wants copies:"<<cust_copies<<endl;
                if(cust_copies<=stock_pos){
                    cout<<"total price of all books that customer buy:"<<cust_copies*price<<endl;
                }
                else{
                    cout<<"that much copies are not available in the stock"<<endl;
                }
                break;
            }

            else{
                cout<<"Book is not available."<<" ";
            

            }
            
                   file >> b_name >> a_name;
                   file >> p_name >>price>>stock_pos;
                
            
        } 
    
        file.close();
       
       
    }
}
 
void bookshopRecord()
{
    int choice;
    char c;
    bookshope b;                              //object of bookshoop
 
    while (1) {
 
        b.main_page();
        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch (choice) {
        case 1:
            do{
 
                b.add_book();
                cout << "\n\nWant you to add"<< " another book? "<<"(y/n) : ";
                cin >> c;
            } 
            while (c == 'y');
            break;
 
        case 2:
            b.show_book();
            break;
 
        case 3:
            b.check_book();
            break;
        
 
        case 4:
            exit(0);
            break;
 
        default:
            cout << "\n\nINVALID CHOICE\n";
        }
    }
}
 

int main()
{
    bookshopRecord();
 
    return 0;
}