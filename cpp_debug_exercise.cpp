#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    cout << "Enter two numbers: ";
    cin >> number1, number2; // ❌ ERROR 1: Incorrect input syntax (should use '>>')

    sum = number1 + number2; // ❌ ERROR 2: 'sum' is undeclared

    cout << "The sum is: " << sum << endl;
    return 0;
}
