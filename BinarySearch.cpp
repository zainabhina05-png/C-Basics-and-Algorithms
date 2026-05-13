
// //binary search and print out the index of the element
#include<iostream>
using namespace std;
 int swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    return 0;
}
int binarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;
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
int key;
cout<<"Enter the element to be searched: ";
cin>>key;
int result = binarySearch(arr, n, key);
if (result != -1) {
    cout << "Element found at index: " << result << endl;
} else {
    cout << "Element not found in the array." << endl;
}

    return 0;
}