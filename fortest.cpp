#include<iostream>

int main()
{
    int counter=0;
    bool flag =true;
    for(;flag;counter++)
    {
        std::cout<<"This is a test"<<std::endl;
        
        if(counter>10)
            flag=false;
    }
}