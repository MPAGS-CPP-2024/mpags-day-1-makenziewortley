#include <iostream>
#include <string>

int main()
{
    // This is a comment
    /* This is a 
    Multiline comment */

    int my_var {7};
    std::cout << my_var << std::endl;

    double my_double {1.2};
    std::cout << my_double << std::endl;

    std::string msg {"Hello"};
    std::cout << msg << std::endl;

    const int b {5};
    std::cout << b << std::endl;

    const double const_double {6.7};
    std::cout << const_double << std::endl;

    std::string message {"Bonjour"};

    // output "Bonjour"
    std::cout << message << std::endl;

    // output "B"
    std::cout  << message[0] << std::endl;

    const double product {my_var * my_double};
    std::cout << product << std::endl;

    const char letter {message[3]};
    std::cout << letter << std::endl;

    const int flag {1};

    switch (flag)
    {
        case 0:
            // Do something for this value
            std::cout << my_double << std::endl;
            break;

        case 1:
            // Do something else for this value
            std::cout << flag << std::endl;
            break;

        case 2:
            // Do something for all other values
            break;
    }

    std::string print {"Output"};  

    for (int i {0}; i < 10; ++i)
    {
        std::cout << print << std::endl;
    }

    int i{0};
    while (i < 10)
    {
        std::cout << message << std::endl;
        ++i;
    }

    int j {0};
    do
    {
        ++j;
    } while (j < 10);
    
}