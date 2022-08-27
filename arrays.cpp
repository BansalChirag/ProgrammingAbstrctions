#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int unique_ele(int a[],int n){
    int res = a[0];
    for(int i = 1;i<n;i++){
        res = res ^ a[i];
    }
    return res;
}


int duplicate_ele(int a[],int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += a[i];
    }
    //  here we have n - 2 as in question it is given that value of number ranges from 0 to n - 2
    int actual_sum = ((n-2)*(n-1)) / 2;
    int dup_ele = sum - actual_sum;
    return dup_ele;
}


void array_intersection(int a[],int b[],int m,int n){
    sort(a,a+m);
    sort(b,b+n);
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (a[i] > b[j]) {
            j++;
        }
        else if (b[j] > a[i]) {
            i++;
        }
        else {
             
            // when both are equal
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}

void rotate_array(int a[],int n,int d){
    int i =0 ;
    while (i<d){
        int temp = a[0];
        for(int j = 0;j<n;j++){
            a[j] = a[j+1];
        }
        a[n-1] = temp;
        i++;
    }
    
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}




int pair_sum(int a[],int n,int k){
    sort(a,a+n);
    int total_pairs = 0;
    int low = 0,high = n-1;
    while(low<high){
        if(a[low] + a[high] < k){
            low ++;
        }else if(a[low] + a[high] > k){
            high--;
        }else{
            total_pairs++;
            low++;
        }
    }
    return total_pairs;
}


void triplet_sum(int a[],int n,int k){
    sort(a,a+n);
    int total_pairs = 0,low = 0,high = n-1;
    for(int i = 0;i<n;i++){
        int target = k - a[i];
        int low = i + 1,high = n-1;
        while(low < high){
            if(a[low] + a[high] > target){
                // cout<<"h0"<<endl;
                high--;
            }else if(a[low] + a[high] < target){
                // cout<<"h1"<<endl;
                low++;
            }else{
                cout<<a[low]<<" "<<a[high]<<" "<<a[i]<<"\n";
                // cout<<"h2"<<endl;
                low++;
                high--;

            }
            // cout<<endl;
        }
    }
}


int third_largest(int arr[],int n){
    if(n<3){
        return -1;
    }
    int first = arr[0], second = INT_MIN, third = INT_MIN;
    for (int i = 1; i < n ; i ++){
        if (arr[i] > first){
            // third  = second;
            second = first;
            first  = arr[i];
        }
        else if (arr[i] > second){
            // third = second;
            second = arr[i];
        }
        // else if (arr[i] > third)
        //     third = arr[i];
    }
    return second;
}




// void union_array(int a[],int n){

// }


void reverseInGroups(int arr[], int n){
    for(int i = 0;i<n / 2;i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}







int main(){
    //  int a[9] = { 1, 3, 6, 2, 5, 4, 3, 2, 4 };
    //  int a[6] = { 2,8,10,5,-2,5 };
    // int b[] = { 3, 3, 5 };
    // // cout<<unique_ele(a,7);
    // // cout<<duplicate_ele(a,9);
    // array_intersection(a,b,9,3);
    // cout<<pair_sum(a,6,10);
    // int nums[] = { 2, 7, 4, 0, 9, 5, 1, 3 };
    // int target = 6;
    // int A[6] = { 1, 4, 45, 6, 10, 8 }; 
    // three_sum(nums,8,target);  
    // int a[7] = {1,2,3,4,5,6,7};
    // rotate_array(a,7,2);
    // int a[4] = {1,2,3,2};
    // int arr[7] = {6, 2, 5, 2, 2, 6, 6};
    int arr[5] = {1,2,3,4,5};
    // cout<<third_largest(arr,5);
    reverseInGroups(arr,5);
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}