#include <iostream>
#include <string>

// not working becuase of adding two string literals "Hello" + ", world".
// use parenthesis to first concatenate string literal and string
// "Hello" + (", world" + exclam)
int main()
{
    const std::string exclam = "!";
    const std::string message = "Hello" + ", world" + exclam;
    
    std::cout << message << std::endl;
    
    return 0;
}
