#include <iostream>
#include <cmath>

using namespace std;

int gettingUserInput()
{
    // Get users age input
    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "You are " << age << " years old" << endl;
    return 0;
}

int gettingUserName()
{
    // Get users string input
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello " << name << endl;
    return 0;
}