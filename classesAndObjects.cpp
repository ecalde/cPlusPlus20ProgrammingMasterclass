#include <iostream>

using namespace std;

class Book {                                // a class is just a blueprint, a specification/template of a datatype
    public:
        string title;
        string author;
        int pages;
};

int classesAndObjects(){

    Book book1;                             // an object is an instance of the class Book
    book1.title = "Hamlet";
    book1.author = "Shakespeare";
    book1.pages = 500;

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    Book book2;                             // an object is an instance of the class Book
    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 700;

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    return 0;
}