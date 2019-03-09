#include <iostream>
using namespace std;

int main() {

    //Simple application of a switch statement


    int value = 5;

    // The break is necessary
    // cannot have a variable as a case, unless it is constant
    switch (value){
        case 4: 
        cout << "The value is 4" << endl;
        break;

        case 5: 
        cout << "The value is 5" << endl;
        break;

        default:
        cout << "Unrecognized value" << endl;
    }

    return 0;
}