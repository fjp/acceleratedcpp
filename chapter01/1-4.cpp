#include <iostream>
#include <string>

/* Yes, this is a valid program. There is a scope nested inside of an outer scope. Because the inner scope defines a variable named s, it hides the variable of the same name that is defined in the outer scope.

Changing the }} to };} in the third line from the end will have no effect on the meaning of the program. The semicolon denotes an empty statement in this situation.
*/
int main()
{
    {   const std::string s = "a string";
        std::cout << s << std::endl;
    {   const std::string s = "another string";
        std::cout << s << std::endl; };}
    
    return 0;
}

/* Improved readability
int main()
{
    {
        const std::string s = "a string";
        std::cout << s << std::endl;
        
        {
            const std::string s = "another string";
            std::cout << s << std::endl;
        }
    }
    
    return 0;
}
*/