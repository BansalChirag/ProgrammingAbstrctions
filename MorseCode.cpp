#include<iostream>
#include<string>
#include<cstring>
using namespace std;

string morseEnCode(char x){
    switch (x) {
        case 'a' || 'A':
            return ".-";
        case 'b':
            return "-...";
        case 'c':
            return "-.-.";
        case 'd':
            return "-..";
        case 'e':
            return ".";
        case 'f':
            return "..-.";
        case 'g':
            return "--.";
        case 'h':
            return "....";
        case 'i':
            return "..";
        case 'j':
            return ".---";
        case 'k':
            return "-.-";
        case 'l':
            return ".-..";
        case 'm':
            return "--";
        case 'n':
            return "-.";
        case 'o':
            return "---";
        case 'p':
            return "-.-.";
        case 'q':
            return "--.-";
        case 'r':
            return ".-.";
        case 's':
            return "...";
        case 't':
            return "-";
        case 'u':
            return "..-";
        case 'v':
            return "...-";
        case 'w':
            return ".--";
        case 'x':
            return "-..-";
        case 'y':
            return "-.--";
        case 'z':
            return "--..";
        case ' ':
            return " ";
        default:
            cout<<"Character not valid"<<endl;
    }
}


void morseCode(string s){
    for(int i = 0;i<s.length();i++){
        cout<<morseEnCode(s[i]);
    }
}

int main(){
    string s = "chirag bansal";
    // getline(cin,s);
    morseCode(s);

    return 0;
}