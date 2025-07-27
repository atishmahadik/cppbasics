// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 1D Arrays in C++
// This code snippet demonstrates how to declare, initialize, and manipulate a simple array in C++
// It includes user input for array elements and modifies one of the elements.
// The program uses the C++17 standard for compilation.


int main() {
    int arr[5];
    cout << "Enter 5 elements of the array: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    arr[3] += 10; // Example of modifying an element in the array
    cout << "Modified 4th element (index 3) by adding 10: " << arr[3] << endl;
    cout << "Array elements after modification: ";

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
