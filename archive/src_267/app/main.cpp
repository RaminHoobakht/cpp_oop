/* Subject: using incomplete type style */

#include "main.hpp"


using cylinder = entity::cylinder;

int main() {
    LF;

    cylinder cylinder_one{};
    auto result = cylinder::default_color;
    pout << "default color is: " << result << NL;


    pout << "\n #(03:01:03): The End ..." << eln;
    return EXIT_SUCCESS;
}

//(17:13:43)
