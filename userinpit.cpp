#include<iostream>
using namespace std;

int main()
{
    int numberOfUsers=0;
    cout<<"For how  many users do you want to input CGPA";
    cin>>numberOfUsers;
    while(numberOfUsers>0)
    {
        int cgpa;
        cout<<"Enter CGPA :";
        cin>>cgpa;
        switch (cgpa)
        {
            case 10:
                cout<<"Outstanding"<<endl;
                break;
            case 9:
                cout<<"Excellent"<<endl;
                break;
            case 8:
                cout<<"Fair"<<endl;            
                break;
            case 7:
                cout<<"Good"<<endl;
                break;
            case 6:
                cout<<"Fair"<<endl;
                break;
            case 5:
            case 4:
                cout<<"Satisfactory"<<endl;
                break;
            default:
                cout<<"Reappear"<<endl;
        }

        
        numberOfUsers--;
    }
    cout<<"Thanks for using this program"<<endl;


}