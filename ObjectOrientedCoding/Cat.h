#include <iostream>


#ifndef CAT_H_
#define CAT_H_

class Cat{
private:
    bool happy;
public:
    Cat();
    ~Cat();
    void speak();
    void jump();
    void makeHappy();
    void makeSad();
};

#endif 