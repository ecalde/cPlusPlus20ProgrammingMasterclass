#include <iostream>

using namespace std;

class Student {                                                             // a class is just a blueprint, a specification/template of a datatype
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa){                  // constructor is a function that is used to create a new object.
            name = aName;                                                   // when you create a new object, the constructor automatically sets the initial values of its properties.
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors(){                                                   // object function, is part of an object and can be called to perform certain actions on that object
            if(gpa >= 3.5){
                return true;
            }
            return false;
        }
};

int objectFunctions(){

    Student student1("Jim", "Business", 2.4);          // an object is an instance of the class Book
    Student student2("Pam", "Art", 3.6);               // an object is an instance of the class Book

    cout << student1.hasHonors() << endl;                                  // in boolean "0 = false"
    cout << student2.hasHonors() << endl;                                  // in boolean "1 = true"

    return 0;
}