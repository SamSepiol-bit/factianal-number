
// factoreal number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int number;
    int factorial = 1;
    cout << "Enter a Positive integer number: ";
    cin >> number;
    for (int i = 1; i <= number;  i ++) {
        factorial *= i;
    }
    cout << "The factorial of " << number << " is: " << factorial << endl;
}
