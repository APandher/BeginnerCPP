#include <iostream>
using namespace std;

int main() {

    for (int i=0; i<5; i++){
        cout << "i is: " << i << endl;

        //break statement exits loop, continue statement skips rest of loop iteration
        if(i == 3){
            //break;
            continue;
        }

        cout << "looping..." << endl;
    }

    //cout << "You broke out of the loop!" << endl;
    
    return 0;
}