#include "ShapePrinter.hpp"
#include <iostream>

namespace printer {

ShapePrinter::ShapePrinter(int &height) : _height(height) {}

void ShapePrinter::print_pyramid()
{
    for (int i = 1; i < _height + 1; i++)
    {
        std::cout << std::string(_height - i, ' ') << std::string(i, '#') << std::endl;
    }
}

void ShapePrinter::print_rectangle(int width)
{

    for (int i = 1; i < _height + 1; i++)
    {
        std::cout << std::string(width, '#') << std::endl;
    }
}

void ShapePrinter::print_square()
{
    for (int i = 1; i < _height + 1; i++)
    {
        std::cout << std::string(_height, '#') << std::endl;
    }
}

} // namespace printer
