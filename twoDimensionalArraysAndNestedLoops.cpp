#include <iostream>

using namespace std;

int twoDimensionalArraysAndNestedLoops(){

    int numberGrid[3][2] = {                 // there are 3 elements (rows) with 2 elements (columns) inside of each
            {1,2},              // element one
            {3,4},              // element two
            {5,6}               // element three
    };

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << numberGrid[i][j];
        }
        cout << endl;
    }

    cout << numberGrid[0][1] << endl;        // prints 2
    cout << numberGrid[2][1] << endl;        // prints 6
    return 0;
}