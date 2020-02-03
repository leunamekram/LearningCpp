
# C++ Basics


## Statements and Structure of a Program

### Statements
Most statements in C++ are lines that end in a semicolon. They could be of the following types:

1. Declaration statements
2. Jump statements
3. Expression statements
4. Compound statements
5. Conditional statements
6. Loop statements
7. Try blocks

### Functions
These are collection of statements that execute sequentially.

Every C++ program must have a special function named **main** (all lower case letters).
When the program is run, execution starts with the first statement inside of function
main and then continues sequentially.

### Dissecting the [Hello World!](../00-hello-world/hello_world.cpp)

*Comments* and *whitespaces* ignored by compiler.
```cpp
/**
 *  @brief  C++ Hello world
 */

```

*Preprocessor directives* that include headers from different libraries.
```cpp
#include <iostream>
#include <limits>
```

Function *declaration* or prototype.
```cpp
void pauseConsole(void);
```

Function *main* definition.
```cpp
int main (int argc, char* argv[])
{
    std::cout << "Hello CPP world!";

    pauseConsole();
    return 0;
}
```

Function *definition* for the prototype.
```cpp
void pauseConsole(void)
{
    // Reset any error flags
    std::cin.clear();

    // Ignore any characters in the input buffer until we find a newline
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Get one more char from the user - Optional
    // std::cin.get();
}
```


## Introduction to Variables
n C++, we use variables to access memory. Variables have an identifier, a type, and a value
(and some other attributes that aren’t relevant here). A variable’s type is used to determine
how the value in memory should be interpreted.

### Variable Definition
```cpp
int x; // define an integer variable named x
int y, z; // define two integer variables, named y and z
```

### Variable Assignment
```cpp
int width; // define an integer variable named width
width = 5; // copy assignment of value 5 into variable width
 
// variable width now has value 5
```
One downside of assignment is that it requires at least two statements: one to define the variable,
and one to assign the value.

### Variable Initialization
Providing an initial value to a variable when it is defined. 3 ways to do it:

1. Copy initialization
2. Direct initialization
3. Brace initialization

Copy initialization:
```cpp
int width = 5;
```

Direct initialization:
```cpp
int width(5);
```

For simple data types (like integers), copy and direct initialization are essentiallythe same.
But for some advanced types, direct initialization can perform better than copy initialization.

Unfortunately, direct initialization can’t be used for all types of initialization
(such as initializing an object with a list of data). In an attempt to provide a more consistent
initialization mechanism, C++11 added a new syntax called brace initialization (also sometimes
called uniform initialization or list initialization) that uses curly braces.

Brace initialization comes in two forms:
```cpp
int width{5}; // direct brace initialization of value 5 into variable width (preferred)
int height = {6}; // copy brace initialization of value 6 into variable height
```
