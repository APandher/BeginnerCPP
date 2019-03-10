#include <iostream>

#ifndef PERSON_H_
#define PERSON_H_

using namespace std;

class Person{
private:
    string name;

public:
    Person();
    void getName();
    void setName(string newName);
};

#endif 