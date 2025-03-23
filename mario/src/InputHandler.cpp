#include "InputHandler.hpp"
#include <ios>
#include <iostream>
#include <limits>

namespace iohandler {

InputHandler::InputHandler(){};

int InputHandler::get_user_input(std::istream &input)
{

    float user_input;

    if (&input == &std::cin) { std::cout << "Enter your desired height: "; }
    input >> user_input;

    // Check input
    if (input.fail() || user_input != (int)user_input)
    {
        std::cout << "Please enter a valid number between 1 and 9" << std::endl;
        input.clear();
        input.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        exit(2);
    }
    return user_input;
}
} // namespace iohandler