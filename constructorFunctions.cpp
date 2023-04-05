#include <iostream>

using namespace std;

class NewBook {                                                                 // a class is just a blueprint, a specification/template of a datatype
public:
    string title;
    string author;
    int pages;
    NewBook(string aTitle, string aAuthor, int aPages){                         // constructor
        title = aTitle;
        author = aAuthor;
        pages = aPages;

    }
};

int constructorFunctions(){

    NewBook book1("Hamlet", "Shakespeare", 500);          // an object is an instance of the class Book

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    NewBook book2("Lord of the Rings", "Tolkein", 700);    // an object is an instance of the class Book

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    return 0;
}