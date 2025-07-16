// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Write a statement that takes an input of age
// and prints you are adult or not
// if age >= 18, print "You are an adult."
// else print "You are not an adult."
// Use if-else statement for this
// Example input: 20
// Example output: You are an adult.
// Example input: 16
// Example output: You are not an adult.
// Use cin and cout for input and output

// int main() {
//     int age;
//     cin >> age;
//     if (age >= 18) {
//         cout << "You are an adult." << endl;
//     } else if (age < 18) {
//         cout << "You are not an adult." << endl;
//     }
//     return 0;
// }

/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Write a program that takes input of marks and prints the grade according to the above rules.
Example input: 85
Example output: A
Example input: 30
Example output: E
Use if-else statement for this
Use cin and cout for input and output
*/
int main() {
    int marks;
    cin >> marks;

    if (marks < 25) {
        cout << "F" << endl;
    } else if (marks < 45) {
        cout << "E" << endl;
    } else if (marks < 50) {
        cout << "D" << endl;
    } else if (marks < 60) {
        cout << "C" << endl;
    } else if (marks < 80) {
        cout << "B" << endl;
    } else {
        cout << "A" << endl;
    }

    return 0;    
}
