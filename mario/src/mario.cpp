#include <iostream>

int main()
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

    int pyramid_height = user_input;

    for (int i = 1; i < user_input + 1; i++)
    {
        std::cout << std::string(user_input - i, ' ') << std::string(i, '#') << std::endl;
    }
}
