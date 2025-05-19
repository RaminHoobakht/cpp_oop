#include "main.hpp"


using point2 = entity::point2;

int main() {
    LF;

    point2 point_one{10.31, 12.17};
    point2 point_two{11.31, 14.45};
    point2 point_three{19.31, 17.36};

    pout << "point2 count is: " << point2::get_point_count() << NL;

    pout << "length for point_one   is: " << point_one.length() << NL;
    pout << "length for point_two   is: " << point_two.length() << NL;
    pout << "length for point_three is: " << point_three.length() << NL;

    pout << "\n #(19:59:23): The End ..." << eln;
    return EXIT_SUCCESS;
}

//(02:59:27)
