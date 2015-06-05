#include <iostream>
#include <string>

/*
 The first std::cin line will read input until it encounters a space, and store the result in the variable name. The rest of the input remains buffered. The second std::cin line will read the remaining name after the space without pausing to ask for more input.
 */
int main()
{
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;
    std::cout   << "Hello, " << name
                << std::endl << "And what is yours? ";
    std::cin >> name;
    std::cout   << "Hello, " << name
                << "; nice to meet you, too!" << std::endl;
    return 0;
}