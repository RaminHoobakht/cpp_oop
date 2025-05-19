/* Subject:  */

#include "main.hpp"

using point = entity::point;


int main() {

    LF;

    point point_one{10.36, 33.25};

    out << "Point Count: " << point::point_cout() << NL;
    SEP;

    out << "distance: " << static_cast<long double>(point_one.distance()) << NL;


    out << "\n #(22:57:16): The End ..." << eln;
    return EXIT_SUCCESS;
}
