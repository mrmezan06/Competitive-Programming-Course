#include<bits/stdc++.h>
                
using namespace std;
                
int main() {
    vector<int> v = {8, 9, 3, 6, 5};
    // Size of the vector
    cout << "Vector Size: ";
    cout << v.size() << endl;
    // Sort the vector
    cout << "Sorted vector: ";
    sort(v.begin(), v.end());

    for(int x : v) {
        cout << x << " ";
    }
    cout<<endl;

    // Reverse the vector
    cout << "Reversed vector: ";
    reverse(v.begin(), v.end());
    for(int x : v) {
        cout << x << " ";
    }
    cout<<endl;

    // Fill the vector with 10
    v.assign(5, 10);
    cout << "Filled vector: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout<<endl;

    // Insert 7 at the end
    v.push_back(7);
    cout << "Pushed vector: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout<<endl;

    // Remove the last element
    v.pop_back();
    cout << "Popped vector: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout<<endl;

    // Remove the first element
    v.erase(v.begin());
    cout << "Erased vector: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout<<endl;

    // Insert 5 at the beginning
    v.insert(v.begin(), 5);
    cout << "Inserted vector: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout<<endl;

    // Insert 2 at the beginning
    v.insert(v.begin(), 2);
    cout << "Inserted vector: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout<<endl;

    // Remove the first element
    v.erase(v.begin());
    cout << "Erased vector: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout<<endl;

    // Capacity of the vector
    cout << "Vector Capacity: ";
    cout << v.capacity() << endl;

    // Check if the vector is empty
    cout << "Is the vector empty? ";
    cout << v.empty() << endl;

    // Clear the vector
    v.clear();
    cout << "Cleared vector: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout<<endl;

    // Check if the vector is empty
    cout << "Is the vector empty? ";
    cout << v.empty() << endl;
    
    // Capacity of the vector
    cout << "Vector Capacity: ";
    cout << v.capacity() << endl;

    // Insert 1 at the beginning
    v.insert(v.begin(), 1);
    v.insert(v.begin(), 1);
    v.insert(v.begin(), 1);
    v.insert(v.begin(), 1);
    v.insert(v.begin(), 1);
    v.insert(v.begin(), 1);
    v.insert(v.begin(), 1);
    v.insert(v.begin(), 1);
    v.insert(v.begin(), 1);
    v.insert(v.begin(), 1);
    v.insert(v.begin(), 1);

    cout << "Inserted vector: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout<<endl;
    // Capacity of the vector after inserting 10 elements in the vector it will double the capacity
    cout << "Vector Capacity: ";
    cout << v.capacity() << endl;
    
    return 0;
}