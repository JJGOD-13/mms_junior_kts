#pragma once

namespace printer {

class ShapePrinter
{
private:
    int _height;

public:
    ShapePrinter(int &height);

    void print_pyramid();
    void print_rectangle(int width);
    void print_square();
};

} // namespace printer