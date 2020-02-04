/**
 *  @brief  C++ Hello world
 */

#include <iostream>
#include <limits>

#define BRACE_INIT

#if defined(COPY_INIT)
// This is a copy initialization
int width = 1;
int height = 2;

#elif defined(DIRECT_INIT)
// This is a direct initialization
int width(3);
int height(4);

#elif defined(BRACE_INIT)
// This is a direct brace initialization
int width {5};
int height = {6};

#else
// This is a simple declaration
int width;
int height;

#endif


void pauseConsole(void);

int main (int argc, char* argv[])
{
    std::cout << "CPP Basics: Width = " << width << ", Height = " << height;

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
