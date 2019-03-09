#include <iostream>
using namespace std;

int main(){
    //Variable declarations

    int numberCats = 5; 
    int numberDogs = 12;

    //Print statements

    cout << "Number of cats: " << numberCats << endl;

    //arithmetic can be performed during cout

    cout << "Number of total animals: " << numberCats + numberDogs << endl;

    //Variable values can be changed via incrementation

    numberDogs++;

    cout << "New number of dogs: " << numberDogs << endl;

    cout << "Number of total animals: " << numberCats + numberDogs << endl;

    return 0;
}
