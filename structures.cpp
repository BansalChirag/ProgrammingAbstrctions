#include<iostream>
using namespace std;
struct student{
    int rollNo;
    float cgpa;
    char gender;
};

struct product{
    double w;
    float p;
};


struct movies_t{
    string title;
    int year;
};

struct friends_t{
    string name;
    string email;
    movies_t favourite_movie;
}charlie, maria;




int main(){
    // product p1;
    // product *p;
    // cout<<sizeof(p1)<<endl;
    // cout<<&p1<<endl;
    // cout<<sizeof(p1.w)<<endl;
    // cout<<&(p1.p)<<endl;
    // cout<<&p<<endl;
    friends_t Yudhvir;
    Yudhvir.name = "Harsh";
    Yudhvir.email = "Harsh@small";
    Yudhvir.favourite_movie.title = "Badla";
    Yudhvir.favourite_movie.year = 2015;
    return 0;
}