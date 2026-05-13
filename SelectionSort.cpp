
selection sort
#include<iostream>
using namespace std;
int swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    return 0;
}
int main() {
    //linear sort array  taken by user
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
cout<<"Enter the elements of array: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
//sorting the array using selection sort
for(int i=0;i<n-1;i++){
    int minIndex=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minIndex]){
            minIndex=j;
        }
    }
    swap(arr[i],arr[minIndex]);
}
//printing the sorted array
cout<<"The sorted array is: ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

    return 0;
}
