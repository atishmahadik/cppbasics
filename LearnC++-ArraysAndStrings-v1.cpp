#include <bits/stdc++.h>
using namespace std;
// 2D Arrays in C++
// This code snippet demonstrates how to declare, initialize, and manipulate a simple 2D array in C++
// It includes user input for array elements and modifies one of the elements.
// The program uses the C++17 standard for compilation.


int main() {
    int arr[3][5];
    cout << "Enter 15 elements of the 2D array (3x5): ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
        }
    }
    arr[1][1] += 10; // Example of modifying an element in the 2D array
    cout << "Modified element at (1, 1) by adding 10: " << arr[1][1] << endl;
    cout << "2D Array elements after modification: ";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}
