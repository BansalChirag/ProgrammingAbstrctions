#include<iostream>
using namespace std;



int main(){
    // float cgpa;
    // cin>>cgpa;
    // if(cgpa >=9 && cgpa <=10){
    //     cout<<'O'<<endl;
    // }
    // else if(cgpa >=8 && cgpa < 9){
    //     cout<<'E'<<endl;
    // }
    // else if(cgpa >=7 && cgpa < 8){
    //     cout<<"VG"<<endl;
    // }
    // else if(cgpa >=5 && cgpa <7){
    //     cout<<'G'<<endl;
    // }
    // else if(cgpa >=4 && cgpa <5){
    //     cout<<"Satisfactory"<<endl;
    // }
    // else{
    //     cout<<"Reappear"<<endl;
    // }


    // int cgpa,numberOfUsers;
    // cout<<"Enter Number of Users : ";
    // cin>>numberOfUsers;
    // while(numberOfUsers){    
    //     cin>>cgpa;
    //     switch(cgpa){
    //         case 10:
    //             cout<<"Outstanding"<<endl;
    //             break;
    //         case 9:
    //             cout<<"Eexcellent"<<endl;
    //             break;
    //         case 8:
    //             cout<<"Very Good"<<endl;
    //             break;
    //         case 7:
    //             cout<<"Good"<<endl;
    //             break;
    //         case 6:
    //             cout<<"Fair"<<endl;
    //             break;
    //         case 5:
    //             cout<<"Fair"<<endl;
    //             break;
    //         case 4:
    //             cout<<"Satisfactory"<<endl;
    //             break;
    //         case 3:
    //             cout<<"Reappear"<<endl;
    //             break;
    //         case 2:
    //             cout<<"Reappear"<<endl;
    //             break;
    //         case 1:
    //             cout<<"Reappear"<<endl;
    //             break;
    //         default:
    //             cout<<"Invalid Input"<<endl;
    //             break;
    //     }
    //     numberOfUsers--;
    // }


    int cgpa,numberOfUsers;
    cout<<"Enter Number of Users : ";
    cin>>numberOfUsers;

    do{
        cin>>cgpa;
        switch(cgpa){
            case 10:
                cout<<"Outstanding"<<endl;
                break;
            case 9:
                cout<<"Eexcellent"<<endl;
                break;
            case 8:
                cout<<"Very Good"<<endl;
                break;
            case 7:
                cout<<"Good"<<endl;
                break;
            case 6:
                cout<<"Fair"<<endl;
                break;
            case 5:
                cout<<"Fair"<<endl;
                break;
            case 4:
                cout<<"Satisfactory"<<endl;
                break;
            case 3:
                cout<<"Reappear"<<endl;
                break;
            case 2:
                cout<<"Reappear"<<endl;
                break;
            case 1:
                cout<<"Reappear"<<endl;
                break;
            default:
                cout<<"Invalid Input"<<endl;
                break;
        }
        numberOfUsers--;
    }
    while(numberOfUsers>0);
    

    


    return 0;
}