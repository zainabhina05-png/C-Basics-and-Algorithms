
//linear search 
#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
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
//printing the sorted array
cout<<"The array is: ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
int key;
cout<<"Enter the element to be searched: ";
cin>>key;
int result = linearSearch(arr, n, key);
if (result != -1) {
    cout << "Element found at index: " << result << endl;
} else {
    cout << "Element not found in the array." << endl;
}

    return 0;
}
