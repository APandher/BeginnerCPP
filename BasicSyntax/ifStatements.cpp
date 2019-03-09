#include <iostream>

using namespace std;

int main() {

    //Creating a simple password guessing game

    string password = "guessit";

    string userInput;

    cout << "Enter the password: " << flush;

    cin >> userInput;

    if (userInput == password){
        cout << "Access granted" << endl;
    }

    else {
        cout << "Access denied" << endl;
    }

    return 0;
}