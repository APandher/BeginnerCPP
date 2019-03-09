#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main() {

    float value = 1.1;

    // it is unpredictable to compare two floats with == operator
    if(value == 1.1){
        cout << "equals" << endl;
    }

    else {
        cout << "not equals" << endl;
    }


    return 0;
}


//A better way to do this comparison is with an epsilon function 

 bool AreSame(float a, float b) {
    return std::fabs(a - b) < std::numeric_limits<float>::epsilon();
    }