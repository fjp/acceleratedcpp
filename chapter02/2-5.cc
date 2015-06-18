#include <iostream>
#include <string>

// say what standard-library names we use
using std::cin;         using std::endl;
using std::cout;        using std::string;


int main()
{
    
    // draw square
    int size = 5;
    
    
    for (int r = 0; r != size; r++) {
        if (r == 0 || r == size - 1) {
            cout << string(size, '*');
        }
        else {
            cout << "*" + string(size - 2, ' ') + "*";
        }
        cout << endl;
    }
    
    cout << endl;
    
    // draw rectangle
    int rows = 5;
    int cols = 10;
    
    
    for (int r = 0; r != rows; r++) {
        if (r == 0 || r == rows - 1) {
            cout << string(cols, '*');
        }
        else {
            cout << "*" + string(cols - 2, ' ') + "*";
        }
        cout << endl;
    }
    
    cout << endl;
    
    
    // draw triangle
    size = 9;
    rows = 5;
    
    for (int r = 0; r != rows; r++) {
        if (r == 0) {
            cout << string(size, '*');
        }
        else if (r == rows - 1) {
            cout << string(size/2, ' ') + "*" + string(size/2, ' ');
        }
        else {
            cout << string(r, ' ') + "*" + string(size - 2*r - 2, ' ') + "*" + string(r, ' ');
        }
        cout << endl;
    }

	return 0;
}

