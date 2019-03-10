#include <iostream>
#ifndef PERSON_H_
#define PERSON_H_

using namespace std;
class Person{
private:
    int age;
    string name;

//overloading constructor 
public:
    Person();
    Person(string newName, int newAge);
    void getInfo();
};


#endif 