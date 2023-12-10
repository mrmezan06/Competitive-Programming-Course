#include<bits/stdc++.h>
                
using namespace std;

// All STL containers are passed by value
// So, we need to pass them by reference

void updateArray(array<int, 5> &arr) {
    arr[0] = 100;
}

                
int main() {
    array<int, 5> arr = {1, 2, 3, 4, 5};

  
    cout << "Array Size: ";
    cout << arr.size() << endl;

    updateArray(arr);

    // Sort the array
    cout << "Sorted array: ";
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    array<int, 5> arr1; 
    // Fill the array with 10
    arr1.fill(10);
    // foreach loop
    cout<< "foreach loop fill(10): ";
    for(int x : arr1) {
        cout << x << " ";
    }

    cout << endl;

    // Reverse the array
    cout << "Reversed array: ";
    reverse(arr.begin(), arr.end());
    for(int x : arr) {
        cout << x << " ";
    }
    
    return 0;
}