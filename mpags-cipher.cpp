#include <iostream>
#include <string>
#include <cmath>
#include <vector>

int main(int argc, char* argv[])
{
    const std::vector<std::string> cmdLineArgs { argv, argv+argc };

    for (size_t i{0}; i < cmdLineArgs.size(); i++)
    {
        std::cout << "Argument: " << i << " " << cmdLineArgs[i] << std::endl;
        if (cmdLineArgs[i] == "-h")
        {
            std::cout << "This is a description of this command that is helpful." << std::endl;
        }
        else if (cmdLineArgs[i] == "--help")
        {
            std::cout << "This is a description of this command that is helpful." << std::endl;
        }
        else if (cmdLineArgs[i] == "--version")
        {
            std::cout << "This is the version information. I assume we're not supposed to return the actual version number because I don't know how to get that" << std::endl;
        }
        else if (cmdLineArgs[i] == "-i")
        {
            std::string infilename{""};
            infilename = cmdLineArgs[i+1];
            std::cout << infilename << std::endl;
        }
        else if (cmdLineArgs[i] == "-o")
        {
            std::string outfilename{""};
            outfilename = cmdLineArgs[i+1];
            std::cout << outfilename << std::endl;
        }
    }

    /* Exercise 5
    
    char in_char{'x'};
    std::string out_str{""};
    while(std::cin >> in_char)
    {
        if (std::isalpha(in_char)) {
            out_str += std::toupper(in_char);
            continue;
        }
        switch (in_char)
        {
            case '1':
                out_str += "ONE";
                break;
            case '2':
                out_str += "TWO";
                break;
            case '3':
                out_str += "THREE";
                break;
            case '4':
                out_str += "FOUR";
                break;
            case '5':
                out_str += "FIVE";
                break;
            case '6':
                out_str += "SIX";
                break;
            case '7':
                out_str += "SEVEN";
                break;
            case '8':
                out_str += "EIGHT";
                break;
            case '9':
                out_str += "NINE";
                break;
            case '0':
                out_str += "ZERO";
                break;
            default:
                break;
        }

        // Ignore any other non-alpha characters.
        
    }
    std::cout << out_str << std::endl;

    */

   /* Learning vectors

    std::vector<double> vec = {1.2, 3.4, 5.6};
    std::cout << vec.size() << std::endl;

    vec.push_back(7.8);
    vec.push_back(9.1);

    std::cout << vec.size() << std::endl;

    vec.pop_back();

    std::cout << vec.size() << std::endl;

    for (size_t i{0}; i < vec.size(); i++)
    {
        std::cout << "Index: " << i << " " << vec[i] << std::endl;
    }

    */
}