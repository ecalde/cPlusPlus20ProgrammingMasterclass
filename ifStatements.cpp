#include <iostream>

using namespace std;

int ifStatements()
{
    bool isMale = true;
    bool isTall = true;
    bool isFemale = true;
    bool isShort = false;

    if(isMale && isTall)
    {
        cout << "You are a tall male\n";
    } else if(isMale && !isTall)
    {
        cout << "You are a short male";
    } else
    {
        cout << "You are either not a tall or a male or both\n";
    }

    if(isFemale || isShort)
    {
        cout << "You either a female or short\n";
    } else
    {
        cout << "You are neither a female nor short\n";
    }

    return 0;
}

int getMax(int num1, int num2, int num3)
{
    int result;

    if(num1 >= num2 && num1 >= num3)
    {
        result = num1;
    } else if(num2 >= num1 && num2 >= num3)
    {
        result = num2;
    } else
    {
        result = num3;
    }

    cout << result << endl;
    return result;
}