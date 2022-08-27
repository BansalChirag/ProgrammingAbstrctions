#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void output(int start){
    static int count = 0;
    count++;
    if (start <= 0){
        cout<<"Total times function called : "<<count<<endl;
        return ;
    }
    cout<<start<<endl;
    output(start-1);
}

long factorial(long n){
    if(n == 0 || n == 1){
        return 1;
    }
    return  n*factorial(n-1);

}


int x_power_n(int x,int n){
    if(n == 0){
        return 1;
    }
    int num = x_power_n(x,n-1);
    return (x*num);
}


int sum_digits(int n){
    if(n == 0){
        return 0;
    }
    // int rem = n % 10;
    // n = n / 10;
    // int x = rem + sum_digits(n);
    // return x;

    return (n % 10 + sum_digits(n / 10));
}



void increasing_order(int n){
    if(n == 1){
        cout<<"1"<<" ";
        return;
    }
    increasing_order(n-1);
    cout<<n<<" ";
}


int number_of_digits(int n){
    const int num = 0;
    if(n == 0){
        return 0;
    }
    return (1 + number_of_digits(n / 10));
}


bool check_sorted(int a[],int n){
    if(n == 0 || n == 1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    bool is_sorted = check_sorted(a+1,n-1);
    return is_sorted;
}

int sum_array(int a[],int n){
    if(n == 0 || n == 1){
        return a[0];
    }
    int num = sum_array(a+1,n-1);
    return num + a[0];
}


bool  check_number(int a[],int n,int x){
    if(n == -1){
        return false;
    }
    if(a[0] == x){
        return true;
    }
    bool is_present = check_number(a+1,n-1,x);
    return is_present;
}


int first_index(int a[],int size,int x){
    if(size == 0){
        return -1;
    }
    if(a[0] == x){
        return 0;
    }
    int ans = first_index(a+1,size-1,x);
    if(ans == -1){
        return -1;
    }
    return ans + 1;
}


// int last_index(int a[],int size,int x){
//     if(size == 0){
//         return -1;
//     }
//     int ans = last_index(a+1,size-1,x);
//     if(a [0] == x){
//         return 0;
//     }
//     if(ans == -1){
//         return ans;
//     }
//     return ans + 1;
// }


int allIndexes(int input[], int size, int x, int output[]) {
    if(size<0){
        return 0;
    }
    int first_index=allIndexes(input,size-1,x,output);
    if(input[size-1]==x){
        output[first_index++]=size-1;
    }
    return first_index;
}


int last_Index(int a[],int size,int x){
    if(size == 0){
        return -1;
    }
    if(a[size-1] == x){
        return size-1;
    }
    int ans = last_Index(a,size-1,x);
    return ans;
}


int multiplication(int m,int n){
    // const int temp = n;
    if(n == 1){
        return m;
    }
    int x = multiplication(m,n-1);
    return m + x;

}


int count_zeroes(int n){
    static int x = 0;
    if (n < 0){
        return 0;
    }
    if (n % 10 == 0){
        x++;
        return x;
    }
    x = count_zeroes(n / 10);
    return x;
}



int gp(int k){
    // 1 +  1/2 + 1/4
    if(k == 0 ){
        return 1;
    }
    double ans = 1 / (double)pow(2,k) + gp(k-1);
    return ans;
}


bool helper(string s,int start,int end){
    if(start == end){
        return true;
    }
    if(s[start] != s[end]){
        return false;
    }if(start<end){
        return  helper(s,start+1,end-1);
    }
    return true;
    
}


bool check_palindrome(string s,int n){
    return helper(s,0,n-1);
}


// void replace_character(char input[],int  start){
//     if(input[start] == '\0' || input[start+1] == '\0'){
//         return ;
//     }
//     replace_character(input,start+1);
//     if(input[start] == 'p' && input[start+1] == 'i'){
//         for (int i = strlen(input); i >= start + 2; i--) {
//             input[i + 2] = input[i];
//         }
//         input[start] = '3';
//         input[start + 1] = '.';
//         input[start + 2] = '1';
//         input[start + 3] = '4';
//     }
// }


void replace_character(char input[]){
    if(input[0] == '\0' || input[1] == '\0'){
        return ;
    }
    replace_character(input+1);
    if(input[0] == 'p' && input[1] == 'i'){
        for (int i = strlen(input); i >= 2; i--) {
            input[i + 2] = input[i];
        }
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
    }
}


string removeX(string str,char X){
    // Base Case
    if (str.length() == 0) {
        return "";
    }
    // Check the first character
    // of the given string
    if (str[0] == X) {
        // Pass the rest of the string
        // to recursion Function call
        return removeX(str.substr(1), X);
    }
    // Add the first character of str
    // and string from recursion
    return str[0] + removeX(str.substr(1), X);
}



// string removeX(string str,char X){
//     // Base Case
//     if (str.length() == 0) {
//         return "";
//     }
//     // Check the first character
//     // of the given string
//     string ans = "";
//     if (str[0] != X) {
//         // Pass the rest of the string
//         // to recursion Function call
//         ans + str[0];
//     }
//     // Add the first character of str
//     // and string from recursion
//     return ans + removeX(str.substr(1), X);
// }





void TOH(int n,char source,char aux,char destination){
    if(n == 0){
        return;
    }
    TOH(n-1,source,destination,aux);
    cout<<source<<" "<<destination<<endl;
    TOH(n-1,aux,source,destination);
    // total_steps = 2^power(n) - 1
}




int main(){
    // int n;.0
    // cin>>n;
    // output(n);
    // cout<<factorial(n);
    // cout<<sum_digits(n);
    // cout<<x_power_n(3,4);
    // increasing_order(n);
    // cout<<number_of_digits(n);
    // int a[9] = {5,5,6,7,6,5,622,7};
    // cout<<check_sorted(a,5);
    // cout<<sum_array(a,5);
    // cout<<check_number(a,5,30);
    // cout<<last_Index(a,9,5);
    // cout<<multiplication(3,5);
    // cout<<count_zeroes(102040000);
    // cout<<gp(4);
    // cout<<check_palindrome("raceaar",7);
    // char str[] = "pippppiiiipi";
    // replace_character(str);
    // cout<<str;
    // cout<<removeX("xabcx",'x');
    TOH(3,'A','B','C');
    return 0;

}