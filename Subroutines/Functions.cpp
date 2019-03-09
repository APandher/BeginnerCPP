#include <iostream>
using namespace std;


// Implement a basic function

void greeter();

int main() {
    greeter();
    return 0;
}

void greeter(){
    string name; 
    cout << "What is your name? " << flush;
    cin >> name;
    cout << "Hello " << name << "!" << endl;
}



/*

NOTES

The goal for a main function is to make it as simple as possible

In order to avoid having to define the function before main, we can make reference to it
without assigning code and then assign the code at a later point.

The return type of code is highly dependant on the purpose of the function

Functions can also be made static.

*/