#include<iostream>
using namespace std;
#define tax 8.25
#define TV_price 400.00
#define VCR_price 220.00
#define Remote_Controller_price 35.20
#define CD_Player_price 300.00 
#define Tape_Recorder 150.00
 
int main(){
 
     int TV, VCR, Remote_Controller, CD_Player,Tape_recorder;
     float subtotal, total;
      
     cout<<"How Many TVs Were Sold?: ";
     cin>>TV;
      
     cout<<"How Many VCRs Were Sold?: ";
     cin>>VCR;
      
     cout<<"How Many Remote Controllers Were Sold?: ";
     cin>>Remote_Controller;
      
     cout<<"How Many Cd Players Were Sold?: ";
     cin>>CD_Player;
      
     cout<<"How Many tape Recorders Were Sold?: ";
      
     //total_price=quantity*total price
      
      
    //  cout<<("QTY << "        "<<"DESCRIPTION"<<"           "<< "UNIT PRICE"<<             TOTAL PRICE ");
    //  cout<<("===          ===========         ==========             =========== ");
     
    //  printf("%d               TV                              400.00                             " , TV , total_price );
    //  printf("%d               VCR                           220.00                             " , VCR ,total_price );
    //  printf("%d         Remote Controller             35.20                             " , Remote_Controller , total_price );
    //  printf("%d             CD PLayer                   300.00                             " , CD_Player,total_price );
    //  printf("%d           Tape Recorder              150.00                             " , Tape_Recorder ,total_price );
      
    //  printf("                                                            -----------   " );            
    //  printf("                                       SUBTOTAL              %.2f         " , subtotal);                                            
    //  printf("                                       TAX                   %.2f         " , tax);
    //  printf("                                       TOTAL                 %.2f         " , total);                                    
      
      
      
    //  getch()
     }


#include <bits/stdc++.h>
using namespace std;


int main() {
    float TV=400,VCR=220,remote_controller=35.20,cd_player=300,tape_recorder=150,total_amount;
    string n;
    cin>>n;
    int t;
    if(n=="tv"){
        cout<<"how many tv you want:";
        cin>>t;
        total_amount=t*400;
        cout<<total_amount;
    }
    if(n=="vcr"){
        cout<<"how many vcr you want:";
        cin>>t;
        total_amount=t*220;
        cout<<total_amount;
    }
    if(n=="remote_controller"){
        cout<<"how many remote_controller you want:";
        cin>>t;
        total_amount=t*35.20;
        cout<<total_amount;
    }
    if(n=="cd_player"){
        cout<<"how many cd_player you want:";
        cin>>t;
        total_amount=t*300;
        cout<<total_amount;
    }
    if(n=="tape_recorder"){
        cout<<"how many tape_recorder you want:";
        cin>>t;
        total_amount=t*150;
        cout<<total_amount;
    }
    
    return 0;

    cout<<"QTY "<< "       "<<"DESCRIPTION"<<"           "<< "UNIT PRICE"<< "            TOTAL PRICE ";
    cout<<"===          ===========         ==========             =========== ";
     cout<<TV<<"               TV                              400.00                             " <<total_amount ;
     cout<< VCR<<"               VCR                             220.00                             "   <<total_amount ;
     cout<< remote_controller<< "               Remote Controller                              35.00                             " <<total_amount ;
     cout<< cd_player<<"               CD PLayer                              300.00                             "  <<total_amount ;
     cout<< tape_recorder<<"               Tape Recorder                              150.00                             "  <<total_amount ;
    //  printf("%d               VCR                           220.00                             " , VCR ,total_price );
    //  printf("%d         Remote Controller             35.20                             " , Remote_Controller , total_price );
    //  printf("%d             CD PLayer                   300.00                             " , CD_Player,total_price );
    //  printf("%d           Tape Recorder              150.00                             " , Tape_Recorder ,total_price );
      
    //  printf("                                                            -----------   " );            
    //  printf("                                       SUBTOTAL              %.2f         " , subtotal);                                            
    //  printf("                                       TAX                   %.2f         " , tax);
    //  printf("                                       TOTAL                 %.2f         " , total);                                    
}