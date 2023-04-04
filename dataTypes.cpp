//
// Created by Edwin Calderon on 4/4/23.
//
using namespace std;

int dataTypes()
{
    char grade = 'A';
    string phrase = "Edwin Calderon";
    int age = 50;
    double gpa = 2.3;
    bool isMale = false;

    return 0;
}

int strings()
{
    string phrase = "Edwin Javier Calderon";
    cout << phrase.length() << endl;
    cout << phrase[0] << endl;
    phrase[0] = 'e';
    cout << phrase << endl;
    cout << phrase.find("Javier", 2) << endl; // checks at what index does "Javier" start in. Starts by checking in index 2
    cout << phrase.substr(8, 3) << endl; // starts at index 8 including and grabs 3 characters
    return 0;
}
