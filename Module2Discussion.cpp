#include <iostream>

using namespace std;

int main()
{
    int age;
    char initial;

    cout << "Enter your age: ";  // ✅ FIXED: Added semicolon
    cin >> age;

    cout << "Enter the first letter of your last name: ";
    cin >> initial;  // ✅ FIXED: Changed '<<' to '>>'

    cout << "You are " << age << " years old and your last name starts with " << initial << endl;

    return 0;
}
