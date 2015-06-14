#include <iostream>
#include <string>

// say what standard-library names we use
using std::cin;         using std::endl;
using std::cout;        using std::string;


int main()
{
    // read shape size
    int row;
    int col;
    
    // ask user for row size
    cout << "Please enter row size: ";
    
    // store row size
    cin >> row;
    
    // ask user for column size
    cout << "Please enter column size: ";
    
    // store row size
    cin >> col;
    
    int row = size;
    
    for (r = 0; r != row; r++) {
        if (r = 0 || r = row) {
            cout << string("*", col);
        }
        else {
            cout << "*" + string(" ", col-2) + "*";
        }
    }
	return 0;
}

