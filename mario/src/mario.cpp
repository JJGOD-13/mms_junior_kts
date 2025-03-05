#include "mario.hpp"
#include <iostream>

int get_user_input()
{

    float user_input;

    std::cout << "Enter your desired pyramid height: ";
    std::cin >> user_input;

    // Check input
    if (std::cin.fail() || user_input != (int)user_input)
    {

        std::cout << "Please enter a valid number between 1 and 9" << std::endl;
        exit(2);
    }

    return user_input;
}

void print_pyramid(int &user_input)
{
    for (int i = 1; i < user_input + 1; i++)
    {
        std::cout << std::string(user_input - i, ' ') << std::string(i, '#') << std::endl;
    }
}

int main()
{
    int user_input = get_user_input();
    print_pyramid(user_input);
}
