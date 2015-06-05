#include <iostream>
#include <string>

// working: concatenating a string and a string literal (twice)
// + is left asociative -> (hello + ", world") + "!"
int main()
{
    const std::string hello = "Hello";
    const std::string message = hello + ", world" + "!";
    
    std::cout << message << std::endl;
    
    return 0;
}
