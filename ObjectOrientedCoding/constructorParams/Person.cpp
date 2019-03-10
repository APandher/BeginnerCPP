#include "Person.h" 
#include <sstream>

Person::Person(){
    name = "Jenny";
    age = 12;
}

Person::Person(string newName, int newAge){
    name = newName;
    age = newAge;
}

void Person::getInfo(){

    stringstream ss;

    ss << "My name is ";
    ss << name;
    ss << " I am ";
    ss << age;

    cout << ss.str() << endl;;
}


