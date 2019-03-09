#include <iostream>
using namespace std;

int main() {

    //String declaration 

    string greeter = "Welcome to my program,";

    //Printing strings

    cout << greeter << " What is your name?" << endl;

    // Similar result can be achieved through concatenation

    string isName = " What is your name?";

    cout << greeter + isName << endl;
    
    return 0;
}