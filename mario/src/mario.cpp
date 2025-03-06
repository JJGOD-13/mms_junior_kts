#include "InputHandler.hpp"
#include "ShapePrinter.hpp"

int main()
{
    // Get user input
    auto io_handle = iohandler::InputHandler();
    int user_input = io_handle.get_user_input();

    // Make a printer
    auto sp = printer::ShapePrinter(user_input);

    // Print a square
    sp.print_square();
}
