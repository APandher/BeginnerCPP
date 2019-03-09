#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    //We can use floats to represent decimal values

    float fVal = 76.4;

    cout << fVal << endl;

    //We can use iomanip to represent floats in scientific notation and choose precision

    cout << setprecision(20) << scientific << fVal << endl;

    //to represent larger floats we can use doubles analogous to long int

    double dVal = 743555.4545545;

    cout << setprecision(20) << scientific << dVal << endl;
    
    return 0;
}