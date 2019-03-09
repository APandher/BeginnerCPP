#include <iostream>
using namespace std;

int main() {

    //create a basic do while loop that terminates once password is inputted

    //can use const for a value that is not going to be changed; prevents reassignment

    const string password = "password";
    string attempt;

    do {
    cout << "enter password: " << flush;
    cin >> attempt;
    } while (attempt != password);


    return 0;
}