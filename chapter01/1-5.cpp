#include <iostream>
#include <string>

/* 
 This is not a valid program because the variable x is declared inside a scope, and it is unavailable when the scope ends. Because of this, the line which attempts to output x will not compile.
 
 To make this program succeed, the simplest fix is to keep the code in one scope by removing the innermost braces.
 */
int main()
{
    {   std::string s = "a string";
    {   std::string x = s + ", really";
        std::cout << s << std::endl; }
        std::cout << x << std::endl;
    }
    return 0;
}

/* Improved readability
int main()
{
    {
        std::string s = "a string";
        {
            std::string x = s + ", really";
            std::cout << s << std::endl;
        }
        std::cout << x << std::endl;
    }
    return 0;
}
*/

// removed inner most braces
int main()
{
    {   std::string s = "a string";
        std::string x = s + ", really";
        std::cout << s << std::endl;
        std::cout << x << std::endl;
    }
    return 0;
}