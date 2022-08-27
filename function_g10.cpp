#include<iostream>
using namespace std;

int add(int, int);
int subtract(int, int);
int divide(int, int);


int main()
{
    do{
        int val1, val2, result;
        cout<<"enter two integer number for further operations";
        cin>>val1>>val2;

        int operation=-1;
        cout<<"Enter 1 for Add"<<endl;
        cout<<"Enter 2 for subtract"<<endl;
        cout<<"Enter 3 for Div"<<endl;
        cout<<"which operation do you want to perform?";
        cin>>operation;
    
        switch(operation)
        {
            case 1:
                result = add(val1, val2);
                break;
            case 2:
                result = subtract(val1, val2);
                break;
            case 3:
                result = divide(val1, val2);
                break;
            default:
                cout<<"Invalid operation";
        }
        cout<<"***************************2**********"<<endl;
        cout<<"Result for operation asked is:"<<result<<endl;
        cout<<"*************************************"<<endl;
        cout<<"Do you want to continue?(y/n)";
        char flag;
        cin>>flag;
        if(flag=='n')
            break;

    }while(true);

    cout<<"Thanks for using this service!!!";
    return 0;
}

int add(int a, int b)
{
    return a+b;
}

int subtract(int a, int b)
{
    return a-b;
}
int divide(int a, int b)
{
    if(b==0)
    {
        cout<<"Division is not possible as the denominator is zero"<<endl;
        return 0;
    }
    else
        return a/b;
}
