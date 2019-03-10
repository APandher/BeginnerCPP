#include <iostream>
#include "Person.h"

using namespace std;

Person::Person(){
    name = "Jerry";

}

void Person::getName() {
    cout << "The name is: " << name << endl;
}

void Person::setName(string newName) {
    name = newName;
}

