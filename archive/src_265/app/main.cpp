#include "main.hpp"

using point2 = entity::point2;

int main() {
    LF;

    point2 point_one{120.36, 52.13};
    point2 point_two{36.74, 41.96};
    point2 point_three{45.21, 63.25};

    point_one.print_info();
    point_two.print_info();
    point_three.print_info();
    SEP;
		
    pout << "Point 2 count is: " << point2::get_point_count() << NL;


    pout << "\n #(21:04:19): The End ..." << eln;
    return EXIT_SUCCESS;
}
