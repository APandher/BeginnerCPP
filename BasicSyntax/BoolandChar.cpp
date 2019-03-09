#include <iostream>

using namespace std;

int main() {

    //boolean values can be declared

    bool testBool = true;

    // true will output 1, false 0

    cout << testBool << endl;

    // char values can hold a single byte (4 bits)

    char testChar = 'g';

    cout << testChar << endl;

    // char can be casted back to its integer ascii counterpart

    cout << (int) testChar << endl;

    //wchar_t can hold 4 bytes and prints the ascii value instead of the char

    wchar_t wtestChar = 'i';

    cout << wtestChar << endl; 

    //this value can be casted back to a char

    cout << (char) wtestChar << endl; 
    
    return 0;

}