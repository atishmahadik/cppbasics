// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Take the day no and print the corresponding day name using switch case.
for example, if the input is 1, output should be "Monday".
If the input is 8, output should be "Invalid day".
This code uses the C++17 standard.
This code is a simple demonstration of using switch-case statements in C++.
The switch-case statement allows for cleaner and more readable code when dealing with multiple conditions based on a single variable.
The code reads an integer input representing the day of the week and prints the corresponding day name or an error message for invalid input.   
*/

int main() {
    int day;
    cin >> day;

    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
    }

    return 0;
}
