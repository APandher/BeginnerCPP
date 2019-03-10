#include <iostream>
#include <sstream>
using namespace std;

int main(){

    //Use string stream to concatenate differnt types into a string
    string name = "Jerry";

    int age = 13;

    stringstream ss;

    ss << "My name is ";
    ss << name;
    ss << " And I am ";
    ss << age;

    cout << ss.str() << endl;

    return 0;

}