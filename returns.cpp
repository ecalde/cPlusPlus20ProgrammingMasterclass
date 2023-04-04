#include <iostream>
using namespace std;

double returns(double num)
{
    double result = num * num * num;
    cout << result << endl;
    return result;
    cout << "This line will never be printed because of the return statement" << endl;
}