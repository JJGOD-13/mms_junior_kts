#pragma once
#include <iostream>

namespace iohandler {
class InputHandler

{
public:
    InputHandler();

    int get_user_input(std::istream &input = std::cin);
};

} // namespace iohandler