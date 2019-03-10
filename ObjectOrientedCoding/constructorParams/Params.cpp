#include <iostream>
#include "Person.h"
using namespace std;

int main (){

    Person person1;

    person1.getInfo();

    Person person2("Jeremiah", 40);

    person2.getInfo();

    return 0;
}