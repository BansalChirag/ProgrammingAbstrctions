// program for batsman
#include<iostream>
using namespace std;
class batsman{
    string name;
    int innings, notout, run;
    public: 
        batsman(string n="", int match=0, int no=0, int r=0)
        {
            name=n;
            innings=match;
            notout=no;
            run=r;
        }
        float avg()
        {
            return float(run)/float(innings-notout);
        }
        void displayInfo()
        {
            cout<<"BatsMan:"<<name<<" played:"<<innings<<" with runs:"<<run<<" and not out for: "<<notout<<endl;
        }
};

int main()
{
    int c;
    cout<<"How many batsman?";
    cin>>c;
    const int bCount=c;
    batsman b[bCount];
    for(int i=0; i<bCount;i++)
    {
        // take input from user
    }
    // logic to display each batman details;
}