#include "gmock/gmock.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(USER_IO_TEST, ExampleTest) { EXPECT_EQ(1, 1); }

TEST(USER_IO_TEST, AnotherTest)
{

    // Mock user input and then sus
    std::string test_input = "1";
    int expected           = 1;

    std::stringstream fake_input(test_input);
    
}