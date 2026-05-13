#include<iostream>
using namespace std;

int swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    return 0;
}

int main() {
    
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
cout<<"Enter the elements of array: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}


cout<<"The sorted array is: ";
for(int i=0;i<n;i++){   
    cout<<arr[i]<<" ";
}
cout<<endl;

    return 0;
}