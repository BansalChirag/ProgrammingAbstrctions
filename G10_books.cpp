#include<iostream>
using namespace std;

class Books{
    string title_;
    string author_;
    string publisher_;
    float price_;
    int stock_;
    public:
        // Books(){
        //     title_="DemoTitle";
        //     author_="DemoAuthor";
        //     publisher_="DemoPub";
        //     price_=0;
        //     stock_=0;
        // }
        Books(string title="DemoTitle", string author="DemoAuthor",string publisher="DemoPub",float price=0,int stock=0)
        {
            title_=title;
            author_=author;
            publisher_=publisher;
            price_=price;
            stock_=stock;
        }
        void display()
        {
            cout<<"title:"<<title_<<", Author:"<<author_<<endl;
        }
        string title()
        {
            return title_;
        }

};

class Sales
{
    Books booklist[5];
    public:
        void populateBooks()
        {
            for(int c=0;c<5;c++)
            {
                string a, t,p;
                float price;
                int stock;
                cout<<"Enter Values in sequence(title, author, publisher, price, stock)";
                cin>>t;
                cin>>a;
                cin>>p;
                cin>>price;
                cin>>stock;
                booklist[c]= Books(t,a,p, price, stock);
            }
        }
        void displayBooks()
        {
            for(int i=0;i<5;i++)
                booklist[i].display();
        }

        void search()
        {
            string userInput;
            cout<<"Enter title to search:";
            cin>>userInput;
            bool flag = false;
            for(int c=0;c<5;c++)
            {
                if(booklist[c].title() == userInput)
                {
                    flag=true;
                    cout<<"Book is found at index:"<<c;
                }
            }
            if(!flag)
            {
                cout<<"Book Not Found";
            }

        }
};


int main()
{
    Sales sObj;
    cout<<"Lets Popupate the books values:";
    sObj.populateBooks();
    cout<<"Lets display the entered values:"<<endl;
    sObj.displayBooks();
    cout<<"Lets Search the books values:";
    sObj.search();

    return 0;
}