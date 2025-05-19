/* Subject:  */

#include "main.hpp"

using point = entity::point;

int main() {

    point point_one{new double{12.36}, new double{52.14}};

    out << "before -> point one: " << point_one << NL;
    SEP;

    point point_two{std::move(point_one)};

    out << "after -> point one: " << point_one << NL;
    SEP;

    out << "point two: " << point_two << NL;
    SEP;

    out << "\n #(05:37:40): The End ..." << eln;
    return EXIT_SUCCESS;
}
