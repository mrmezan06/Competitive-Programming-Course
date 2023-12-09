#include <iostream>

using namespace std;
// array is passed by reference and index is passed by value and new value is passed by value
void updateArray(int arr[], int i, int val) {
    arr[i] = val;
}

// base address of the array is passed and the size of the array is passed
void printArray(int arr[], int n) {
    // size of the array is not passed but it is calculated here int pointer size
    // cout << "Array size in function: " << sizeof(arr) << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(int);

    cout << n << endl;

    // cout << "Array size in main: " << sizeof(arr) << endl;

    printArray(arr, n);

    updateArray(arr, 2, 10); // actual array is updated

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}