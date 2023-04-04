#include <iostream>

using namespace std;

int whileLoops(){
    int index = 1;
    int indexDo = 6;

    while(index <= 5){
        cout << index << endl;
        index++;
    }

    do{
        cout << indexDo << endl;
    } while(indexDo <= 5);

    return 0;
}