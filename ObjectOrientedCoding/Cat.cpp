#include <iostream>
#include "Cat.h"

using namespace std;

//Constructor
Cat::Cat(){
    cout << "Cat created" << endl;
    happy = true;
}

//Destructor
Cat::~Cat(){
    cout << "Cat destroyed" << endl;
}

void Cat::speak() {
    if (happy == true){
        cout << "Meow!" << endl;
    }
    else {
        cout << "Ssss!" << endl;
    }
}

void Cat::jump() {
    cout << "Jumping on top of desk" << endl;
}

void Cat::makeHappy() {
    happy = true;
}

void Cat::makeSad() {
    happy = false;
}