cmake_minimum_required(VERSION 3.15)
project(mario VERSION 1.0.0 DESCRIPTION "It's a me Mario" LANGUAGES CXX)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

# Set the path variables.
set(CMAKE_EXPORT_COMPILE_COMMANDS true)

# set the include directory
include_directories(include)

# Define the actual executables
add_library(printer src/ShapePrinter.cpp)
add_library(io_handler src/InputHandler.cpp)
link_libraries(io_handler printer)
add_executable( mario src/mario.cpp )

# Can also do this
# target_link_libraries(mario PUBLIC printer)

# Define Gtest library and link it.
enable_testing()
# Find the your Gtest installation
find_package(GTest REQUIRED) # If this fails you need to run sudo apt-get install googletest
include_directories(${GTEST_INCLUDE_DIRS}) # Point clang to your GTEST directories

add_executable(test_user_input test/test_user_input.cpp) # Make an executable called test_user_input
target_link_libraries(test_user_input GTest::GTest GTest::Main io_handler ) # Link libraries to that file

gtest_discover_tests(test_user_input) # Automatically find all the tests in that execuatable

