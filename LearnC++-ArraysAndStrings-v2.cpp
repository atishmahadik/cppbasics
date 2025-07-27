#include <bits/stdc++.h>
using namespace std;
// String manipulation in C++
// This code is a placeholder for learning purposes.
// It includes the necessary headers and sets up the main function.
// The actual implementation of string manipulation functions will be added later.
// C++17 standard is used for this project.



int main() {
    string str = "Atish";
    // int length = str.length();
    int length = str.size();
    cout << "Hello, " << str[1] << endl;
    // cout << "This is a placeholder for string manipulation in C++." << endl;
    // cout << "More functionalities will be added in the future." << endl;
    // cout << "Stay tuned for updates!" << endl;
    str[length - 1] = 'y'; // Changing the last character to 'y'
    cout << "Modified string: " << str << endl;
    cout << "Length of the string: " << length << endl;
    cout << str[length - 1] << endl; // Accessing the last character of the string

    return 0;

}
