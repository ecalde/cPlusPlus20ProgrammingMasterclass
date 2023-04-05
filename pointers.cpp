#include <iostream>

using namespace std;

int pointers(){

    int age = 19;
    int *pAge = &age;           // this is how you create a pointer variable and you store the memory address into it
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;

    cout << &age << endl;       // getting the memory address of age
    cout << *pAge << endl;      // derefrencing a pointer address value
    cout << *&age << endl;      // derefrencing a pointer address value

    return 0;
}