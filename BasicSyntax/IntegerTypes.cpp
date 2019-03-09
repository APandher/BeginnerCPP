#include <iostream>
#include <limits>
using namespace std;

int main() {


//Determining the maximum and minimum values that can be stored in an int

cout << "The largest integer value is: "  << INT_MAX << endl; //2^31 - 1

cout << "The smallest integer value is: " << INT_MIN << endl; // -2^31

// To use an int larger than this we can use long int

cout << "The largest long integer is: " << LONG_MAX << endl; //2^63 - 1

// These results are due to a 64 bit architecture 

// We can determine the size of these data types to extrapolate behavior 

cout << "The size of an integer is: " << sizeof(int) << " bytes" << endl;

cout << "The size on a long integer is: " << sizeof(long int) << " bytes" << endl;

//Remark: Unsigned ints are positive and can be used to represent Nat. Numbers

return 0;

}