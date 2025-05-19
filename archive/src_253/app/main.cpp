/* Subject: initializer list for constructor */

#include "main.hpp"

using point = entity::point;

int main() {

    point point_one{{123.36, 563.258}};

    out << point_one << NL;

    out << "\n #(18:02:03): The End ..." << eln;
    return EXIT_SUCCESS;
}
