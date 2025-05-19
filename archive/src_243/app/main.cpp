/* Subject: binding structure  */

#include "main.hpp"
#include "src/header/utillib.hpp"


int main() {

    LF;

    cpp::point point_one{120.36, 32.52};

    cpp::print_pointer(point_one);
    SEP;

    auto [a, b] = point_one;

    cpp::print_pointer(a, b);
    SEP;

    SEP;
    point_one.x = 1011.236;
    point_one.y = 2301.348;

    cpp::print_pointer(point_one);
    SEP;

    cpp::print_pointer(a, b);
    SEP;

    SEP;

    auto func_a = [a]() {
        /* code */
        out << "value of a is: " << a << NL;
    };

    auto func_b = [b]() {
        /* code */
        out << "value of a is: " << b << NL;
    };

    func_a();
    SEP;

    func_b();
    SEP;

    out << "\n #(00:40:52): The End ..." << eln;
    return EXIT_SUCCESS;
}
