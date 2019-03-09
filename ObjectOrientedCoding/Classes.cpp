#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
    //Instanitate the object 
    Cat cat1;

    //Use the object

    cat1.speak();

    //Instantiate and use another object

    Cat cat2;
    cat2.makeSad();
    cat2.speak();
}


/*

Can wrap a {} around an object to force it to be destroyed and invoke a destructor.

*/