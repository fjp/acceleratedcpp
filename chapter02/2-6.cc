#include <iostream>
#include <string>

// say what standard-library names we use
using std::cin;         using std::endl;
using std::cout;        using std::string;


int main()
{
    // read shape size
    string::size_type rows;
    
    
    // ask user for row size
    cout << "Please enter row size: ";
    
    // store row size
    cin >> rows;
    
    // ask user for column size
    cout << "Please enter column size: ";
    
    int cols;
    // store row size
    cin >> cols;
    
    // seperate output from input
    cout << endl;
    
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
    
    for (int r = 0; r != rows; r++) {
        if (r == 0) {
            cout << string(cols, '*');
        }
        else if (r == rows - 1) {
            cout << string(cols/2, ' ') + "*" + string(cols/2, ' ');
        }
        else {
            cout << string(r, ' ') + "*" + string(cols - 2*r, ' ') + "*" + string(r, ' ');
        }
        cout << endl;
    }

	return 0;
}

