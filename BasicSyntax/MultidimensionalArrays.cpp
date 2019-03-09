#include <iostream>
using namespace std;

int main() {

    //Initializing a two dimensional array

    //first entry is rows, second entry is columns
    string animals[2][3] = {
        {"dog", "cat", "goose"},
        {"mouse", "fox", "frog"}
    };

    //to print these elements we can use a nested for loop
    for (int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            cout << animals[i][j] << " " << flush;
        }
        cout << endl;
    }

/*

NOTES

Multidimensional arrays can be initialized with the number of rows omitted but not
the number of columns.

Ex:  string arrays[][3]; //Array with ? rows and 3 columns 

This is because multidimensional arrays are stored continuously in memory, all
we must do is specify when one row ends and the other starts.


Inner arrays cannot have different numbers of elements, they must be of the 
same length

*/

    return 0;

}