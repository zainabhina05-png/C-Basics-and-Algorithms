// // // // //print the steric pattern as the digit that is  inside the array index 
#include<iostream>
using namespace std;
int main() {
    //array taken by user
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<arr[i];j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
