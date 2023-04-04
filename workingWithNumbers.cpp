#include <iostream>
#include <cmath>

using namespace std;

int workingWithNumbers()
{
    cout << pow(2, 5) << endl; // 2 ^ 5 = 32
    cout << sqrt(36) << endl; // square root of 36
    cout << round(4.4) << endl; // rounds the decimal to 4
    cout << round(4.5) << endl; // rounds the decimal to 5
    cout << ceil(4.1) << endl; // rounds the decimal to the ceiling 5
    cout << floor(4.9) << endl; // rounds the decimal to the floor 4
    cout << fmax(3,10) << endl; // returns the bigger of the two numbers
    return 0;
}
