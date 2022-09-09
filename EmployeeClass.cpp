#include<iostream>
using namespace std;

class Employee{
    private:
    int eid;
    string name;
    public:
    Employee(string s,int id){
        eid = id;
        name = s;
    }
    int getEmployeeId(){
        return eid;
    }
    string getName(){return name;}

};

class FullTimeEmployee : public Employee{
    private:
    int salary;
    public:
    FullTimeEmployee(string n,int e,int sal):Employee(n,e){
        salary=sal;
    }
    int getSalary(){return salary;}
};


class PartTimeEmployee : public Employee{
    private:
    int wage;
    public:
    PartTimeEmployee(string n,int e,int w) : Employee(n,e){
        wage = w;
    }
    int getWage(){return wage;}
};





int main(){
    PartTimeEmployee p1("John",1,300);
    FullTimeEmployee f1("Raj",2,3000);
    cout<<"Salary of "<<p1.getName()<<"is "<<p1.getWage()<<endl;
    cout<<"Salary of "<<f1.getName()<<"is "<<f1.getSalary()<<endl;
    return 0;
}