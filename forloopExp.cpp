#include<iostream>
using namespace std;
int main()
{
    // infinite loop
    for(;;)
        cout<<"Hello"<<endl;

    //all set of statements
    for(int counter=0;counter<5;counter++)
    {
        cout<<"Hello counter no: "<<counter<<endl;
    }
    
    //Seperate initial value
    int counter=0;
    for(;counter<5;counter++)
    {
        cout<<"Hello counter no: "<<counter<<endl;
    }


    //No condition to prove the default true resolved for empty condition
    for(int counter=0;;counter++)
    {
        cout<<"Hello counter no: "<<counter<<endl;
    }

    //Seperate initial value and the control statement
    int counter=0;
    for(;counter<5;)
    {
        cout<<"Hello counter no: "<<counter<<endl;
        counter++;
    }


    //Seperate initial value and no control statement for infinite condition check
    int counter=0;
    for(;counter<5;)
    {
        cout<<"Hello counter no: "<<counter<<endl;
        
    }

}