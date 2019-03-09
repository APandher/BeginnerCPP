#include <iostream>

//Include the header file 
#include "utils.h"

using namespace std;

int main() {
    greeter();
    return 0;
}

/* Header file has the definition for greeter so we don't have to prototype it 
in this file */

void greeter(){
    string name; 
    cout << "What is your name? " << flush;
    cin >> name;
    cout << "Hello " << name << "!" << endl;
}

