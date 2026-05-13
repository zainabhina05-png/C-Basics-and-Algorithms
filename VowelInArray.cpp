
// array to find if all vowels are present in the given array by user
#include<iostream>
using namespace std;
bool areAllVowelsPresent(char arr[], int n) {
    bool vowels[5] = {false, false, false, false, false}; // a, e, i, o, u
    for (int i = 0; i < n; i++) {
        switch (arr[i]) {
            case 'a':
            case 'A':
                vowels[0] = true;
                break;
            case 'e':
            case 'E':
                vowels[1] = true;
                break;
            case 'i':
            case 'I':
                vowels[2] = true;
                break;
            case 'o':
            case 'O':
                vowels[3] = true;
                break;
            case 'u':
            case 'U':
                vowels[4] = true;
                break;
        }
    }
    for (int i = 0; i < 5; i++) {
        if (!vowels[i]) {
            return false; // If any vowel is missing
        }
    }
    return true; // All vowels are present
}
int main() {
    //array taken by user
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    char arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if (areAllVowelsPresent(arr, n)) {
        cout << "All vowels are present in the array." << endl;
    } else {
        cout << "Not all vowels are present in the array." << endl;
    }
    return 0;
}
