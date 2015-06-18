#include <iostream>
#include <string>

int main()
{
    // ask for two numbers
    // ask for number one
    std::cout << "Enter number one: ";
    int one;
    std::cin >> one;
    // ask for number two
    std::cout << "Enter number two: ";
    int two;
    std::cin >> two;
    
    int larger, smaller;
    
    if (one > two) {
        larger = one;
        smaller = two;
    }
    else {
        larger = two;
        smaller = one;
    }
    
    
    std::cout << larger << " is larger than " << smaller << std::endl;
}

