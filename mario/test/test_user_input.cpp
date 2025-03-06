#include "InputHandler.hpp"
#include <gtest/gtest.h>
#include <sstream>

namespace {

class IOTest : public testing::Test
{
protected:
    IOTest() {}

    iohandler::InputHandler _io;
    std::stringstream _input{"5"};
};

// The actual Tests
TEST_F(IOTest, test_correct_return) { EXPECT_EQ(5, _io.get_user_input(_input)); }

TEST_F(IOTest, test_incorrect_return) { EXPECT_NE('h', _io.get_user_input(_input)); }

} // namespace