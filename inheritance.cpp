#include <iostream>
using namespace std;

class Chef {                                        // When inherited this is called the Super Class
public:
    void makeChicken(){
        cout << "The chef makes chicken" << endl;
    }
    void makeSalad(){
        cout << "The chef makes salad" << endl;
    }
    void makeSpecialDish(){
        cout << "The chef makes bbq ribs" << endl;
    }
};

class ItalianChef : public Chef{                    // by inheriting Chef it will have access to all of it's functionality. This is called the Sub Class
public:
    void makePasta(){
        cout << "The chef makes pasta" << endl;
    }
    void makeSpecialDish(){                         // this is called overwritting the function it inherited
        cout << "The chef makes chicken parm" << endl;
    }
};

int inheritance()
{
    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeChicken();
    italianChef.makePasta();
    italianChef.makeSpecialDish();

    return 0;
}