#include "testmodule.hpp"

#include "utillib.hpp"

/* definition */
namespace cpp {

    void print_pointer(point point_param) noexcept {
        out << "point x: " << point_param.x << NL;
        out << "point y: " << point_param.y << NL;
    }

    void print_pointer(double x, double y) noexcept {
        out << "x: " << x << NL;
        out << "y: " << y << NL;
    }

} // namespace cpp
