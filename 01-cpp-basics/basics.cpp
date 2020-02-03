/**
 *  @brief  C++ Hello world
 */

#include <iostream>
#include <limits>

void pauseConsole(void);

int main (int argc, char* argv[])
{
    std::cout << "Hello CPP world!";

    pauseConsole();
    return 0;
}

void pauseConsole(void)
{
    // Reset any error flags
    std::cin.clear();

    // Ignore any characters in the input buffer until we find a newline
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Get one more char from the user - Optional
    // std::cin.get();
}
