#include<iostream>
using namespace std;


class  Vehicle{
    private:
    int maxSpeed;
    protected:
    int numTyres;
    public:
    string color;
};



class Car : public Vehicle{
    public:
    int numGears;
};



int main(){
    return 0;
}