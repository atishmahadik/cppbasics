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
Take the age as input from the user and decide accordingly
1. if the age < 10,
    print "not eligible for job"

2. if the age >= 10 and age < 18,
    print "eligible for internship"

3. if the age >= 18 and age < 60,
    print "eligible for job"

4. if the age >= 55 and age <= 57,
    print "eligible for job, but retirement soon"

5. if the age > 57,
    print "retired"

// Example input: 9
// Example output: not eligible for job
// Example input: 15
// Example output: eligible for internship
// Example input: 30
// Example output: eligible for job
// Example input: 56
// Example output: eligible for job, but retirement soon
// Example input: 60
// Example output: retired 

*/

int main() {
    int age;
    cin >> age;

    /*
    if (age < 10) {
        cout << "not eligible for job" << endl;
    } else if (age < 18) {
        cout << "eligible for internship" << endl;
    } else if (age >= 18 && age < 55) {
        cout << "eligible for job" << endl;
    } else if (age >= 55 && age <= 57) {
        cout << "eligible for job, but retirement soon" << endl;
    } else if (age > 57) {
        cout << "retired" << endl;
    }
    */
    if (age < 10) {
        cout << "not eligible for job" << endl;
    } else if (age < 18) {
        cout << "eligible for internship" << endl;
    } else if (age <= 57) {
        cout << "eligible for job";
        if(age >= 55) {
            cout << ", but retirement soon";
        }
        cout << endl;
    } else {
        cout << "retired" << endl;
    }

    return 0;    
}
