#include <iostream>
using namespace std;


int main() {

    //initialize an array

    int values[3];

    //C style manner of retrieving length of an array

    int size = sizeof(values)/sizeof(*values);

    //can load an array by simply referencing and assigning indexes

    values[0] = 7;
    values[1] = 4;
    values[2] = 6;

    //array should contain [7,4,6]    

    for (int i=0; i<size; i++){
        cout << values[i] << endl;
    }

    // can also initialize and load arrays using {}

    double number[3] = {7.2,8.3,9.1};
    int dsize = sizeof(number)/sizeof(*number);

    //array should contain [7.2,8.3,9.1]

    for (int i=0; i<dsize; i++){
        cout << number[i] << endl;
    }

    /* Other methods of initialization

    Initialize with all zero values

    int zeroArray[8] = {};


    Initialize without size

    string texts[] = {"orange", "black", "cat"}; 


    WARNING: Like C, C++ allows you to reference memory out of the index of the array 
    without warning.

    */




    return 0;
}