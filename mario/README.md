# THE PROBLEM

Firstly good job on completing your implementation of the `mario` problem. Within the `mario.cpp` file is my prescribed solution. But feel free to replace it with your own code.

## Adding Functionality

Your function has gotten very good at printing pyramids. But in mario, there are also other kinds of structures that can be built. For example, squares and rectangles. i.e

```plaintext
#####
#####
#####
```

So how can we go about adding this functionality to our program?

Well the most obvious thought is to add another function. But is there a better way to do that? Something that is more extensible for the programmer?

## OOP

Luckily for us there is. People call it OOP or more correctly Object Oriented Programming. An ethos for structuring your code such that it is more readable, extenseble and maintainable.

The primary building block of OOP styled programming is Objects. You describe little functional blocks of code that are responsible to doing *1 task*. Note that the word *task* is a bit broad. It can mean a number of things based on the complexity of your project. But it should be **1 logical process**. This normally produces the best possible results.

### Writing a class.

Here is the syntax for writing a class in CPP

```c++
class Foo
{
  private:
    // Normally variables and stuff that only this class will need to know.
    int _private_variable;
  public:
    // Usually things like constructors, getters, setters and methods that other classes or functions will call.

    Foo(){}; // This is what we call a constructor.
    ~Foo(){}; // This is called a destructor.
}
```

## Now you try!

Go ahead and try to make a class that offers the following methods

- `print_pyramid` : Just like you had before
- `print_sqaure`
- `print_rectangle`

> - Have a think about how you would have to change your `mario.cpp` file to acoomodate those changes.
> - One of those methods would require some other input arguments.

## Testing

Now we want to be assured of the functionality of your code. Does it handle all different test cases? Can it properly handle different inputs that the user passes?

What happens if the user passes in a `-1` or `"hello"`? Does your program break? Or does it handle things *gracefully*

## Installing GTest

```bash
sudo apt-get install libgtest-dev
```

## Oh no our project is getting a bit unwieldly!

The project is increasing in scope and `make` and `g++` are getting a bit hard to use. How can we make our lives as developers easier?

---

## CMake

A scripting tool that automates the creation of Makefiles for your projects.
Lets switch to using Cmake in order to build our project.

1. First you are going to make a `build` directory in your `mario` directory.

```bash
cd mario
mkdir build
```

Now you are going to make a `CMakeLists.txt` file. This is the file that Cmake looks for to run.

```bash
touch CMakeLists.txt
```

Now we can poulate our `CMakeLists.txt` with the necessary commands in order to build our project.

```Cmake
cmake_minimum_required(VERSION 3.15)
project(mario VERSION 1.0.0)

include_directories(include)
add_executable( mario src/mario.cpp)
```

You can now navigate to your `build` directory and build the project using:

```bash
cmake ..
make
```

> Now from here on out, can you read the GTest docs to make a small suite of tests for the user input functions??