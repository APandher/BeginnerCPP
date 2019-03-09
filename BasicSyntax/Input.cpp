#include <iostream>
using namespace std;

int main () {

    //Set up string to expect a user input 

    cout << "Enter your name: " << flush;

    //Initialize a variable to hold user input

    string input;

    // Direct input into the variable and print it

    cin >> input;

    cout << "You entered: " << input << endl;

    // We can do the same thing to capture an integer

    int value;

    cout << "Enter a value: " << flush;

    cin >> value;

    cout << "The value you entered was: " << value << endl;

    return 0;
}