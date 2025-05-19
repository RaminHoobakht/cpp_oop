/* Subject:  */

#include "main.hpp"

using component = entity::component;

int main() {

    LF;
    component component_one{.x = 120.36, .y = 66.52, .z = 896.785};

    out << "value of x is: " << component_one.x << NL;
    out << "value of y is: " << component_one.y << NL;
    out << "value of z is: " << component_one.z << NL;
    SEP;

    out << "\n #(19:27:08): The End ..." << eln;
    return EXIT_SUCCESS;
}
